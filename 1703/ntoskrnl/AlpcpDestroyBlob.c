/*
 * XREFs of AlpcpDestroyBlob @ 0x14047EE40
 * Callers:
 *     AlpcpUnlockBlob @ 0x14047D5A0 (AlpcpUnlockBlob.c)
 *     AlpcpDereferenceBlobEx @ 0x14047EE00 (AlpcpDereferenceBlobEx.c)
 *     AlpcpDispatchReplyToWaitingThread @ 0x140523D60 (AlpcpDispatchReplyToWaitingThread.c)
 *     AlpcpCompleteDispatchMessage @ 0x140525120 (AlpcpCompleteDispatchMessage.c)
 * Callees:
 *     RtlpInterlockedPushEntrySList @ 0x1401894B0 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 */

void __fastcall AlpcpDestroyBlob(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rdi
  int (*v3)(void); // rax
  _SLIST_HEADER *v4; // rcx

  v1 = a1 - 48;
  v2 = AlpcpRegisteredTypes[*(unsigned __int8 *)(a1 - 31)];
  v3 = *(int (**)(void))(v2 + 32);
  if ( !v3 || v3() >= 0 )
  {
    if ( (*(_BYTE *)(v1 + 16) & 2) != 0 )
    {
      v4 = &AlpcpLookasides + 8 * (unsigned __int64)*(unsigned int *)(v2 + 8);
      ++*((_DWORD *)&v4[1].HeaderX64 + 3);
      if ( LOWORD(v4->Alignment) >= LOWORD(v4[1].Alignment) )
      {
        ++LODWORD(v4[2].Alignment);
        ((void (__fastcall *)(__int64))v3)(v1);
      }
      else
      {
        RtlpInterlockedPushEntrySList(v4, (PSLIST_ENTRY)v1);
      }
    }
    else if ( *(_QWORD *)(v2 + 40) )
    {
      (*((void (__fastcall **)(__int64))&AlpcpLookasides + 16 * (unsigned __int64)*(unsigned int *)(v2 + 8) + 7))(v1);
    }
    else
    {
      ExFreePoolWithTag((PVOID)v1, *(_DWORD *)(v2 + 4));
    }
  }
}
