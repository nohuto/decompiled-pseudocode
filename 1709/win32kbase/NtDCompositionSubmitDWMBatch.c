/*
 * XREFs of NtDCompositionSubmitDWMBatch @ 0x1C0034E30
 * Callers:
 *     <none>
 * Callees:
 *     ?GetBatchFragment@CApplicationChannel@DirectComposition@@QEAAPEAVCBatch@2@_N0@Z @ 0x1C0031CBC (-GetBatchFragment@CApplicationChannel@DirectComposition@@QEAAPEAVCBatch@2@_N0@Z.c)
 *     ?SetSynchronizationObject@CBatch@DirectComposition@@QEAAXPEBUSynchronizationObject@2@@Z @ 0x1C0034A94 (-SetSynchronizationObject@CBatch@DirectComposition@@QEAAXPEBUSynchronizationObject@2@@Z.c)
 *     ?ReturnToApplication@CBatch@DirectComposition@@QEAAX_N@Z @ 0x1C0034B54 (-ReturnToApplication@CBatch@DirectComposition@@QEAAX_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00AB7F0 (_guard_dispatch_icall_nop.c)
 *     ?ResolveHandle@SynchronizationObject@DirectComposition@@KAJPEAXKDPEAPEAU12@@Z @ 0x1C013F88C (-ResolveHandle@SynchronizationObject@DirectComposition@@KAJPEAXKDPEAPEAU12@@Z.c)
 */

__int64 __fastcall NtDCompositionSubmitDWMBatch(int a1, __int64 a2, void *a3)
{
  __int64 v6; // rsi
  __int64 v7; // r14
  __int64 v8; // rdi
  __int64 CurrentProcessWin32Process; // rax
  __int64 v10; // r15
  struct _ERESOURCE *v11; // rbx
  struct _RTL_GENERIC_TABLE *v12; // rcx
  _QWORD *v13; // rax
  signed int v14; // ebp
  struct _ERESOURCE *v15; // rbx
  struct DirectComposition::SynchronizationObject *v16; // rdi
  struct DirectComposition::CBatch *BatchFragment; // r14
  _QWORD *v18; // r9
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // rcx
  _QWORD *v22; // rcx
  struct _ERESOURCE *v23; // rbx
  __int64 v24; // rdi
  struct _ERESOURCE *v25; // rbx
  struct DirectComposition::CBatch *v26; // rax
  union _SLIST_HEADER *v27; // rbx
  signed int v29; // eax
  struct _ERESOURCE *v30; // rbx
  struct DirectComposition::CBatch *v31; // rbx
  int Buffer; // [rsp+20h] [rbp-38h] BYREF
  __int64 v33; // [rsp+28h] [rbp-30h]
  struct DirectComposition::SynchronizationObject *v34; // [rsp+78h] [rbp+20h] BYREF

  v6 = 0LL;
  v7 = 0LL;
  v8 = 0LL;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process();
  if ( CurrentProcessWin32Process && (v10 = *(_QWORD *)(CurrentProcessWin32Process + 256)) != 0 )
  {
    v11 = *(struct _ERESOURCE **)(v10 + 8);
    KeEnterCriticalRegion();
    ExAcquireResourceExclusiveLite(v11, 1u);
    v12 = *(struct _RTL_GENERIC_TABLE **)v10;
    Buffer = a1;
    v33 = 0LL;
    v13 = RtlLookupElementGenericTable(v12, &Buffer);
    if ( v13 )
      v8 = v13[1];
    v14 = v8 == 0 ? 0xC0000022 : 0;
    if ( v8 )
      _InterlockedIncrement((volatile signed __int32 *)(v8 + 8));
    ExReleaseResourceLite(*(PERESOURCE *)(v10 + 8));
    KeLeaveCriticalRegion();
  }
  else
  {
    v14 = -1073741823;
  }
  if ( v8 )
  {
    v15 = *(struct _ERESOURCE **)(v8 + 32);
    KeEnterCriticalRegion();
    ExAcquireResourceExclusiveLite(v15, 1u);
    v7 = v8;
  }
  if ( v14 >= 0 )
  {
    if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7) == 2 )
    {
      v6 = v7;
    }
    else
    {
      v14 = -1073741811;
      (**(void (__fastcall ***)(__int64))v7)(v7);
    }
    if ( v14 >= 0 )
    {
      v34 = 0LL;
      v16 = 0LL;
      if ( a3 )
      {
        v29 = DirectComposition::SynchronizationObject::ResolveHandle(a3, 1u, 1, &v34);
        v16 = v34;
        v14 = v29;
      }
      if ( v14 >= 0 )
      {
        BatchFragment = DirectComposition::CApplicationChannel::GetBatchFragment(
                          (DirectComposition::CApplicationChannel *)v6,
                          1,
                          1);
        v18 = 0LL;
        *((_BYTE *)BatchFragment + 32) ^= (*((_BYTE *)BatchFragment + 32) ^ ~(*(_BYTE *)(v6 + 48) >> 1)) & 1;
        *(_BYTE *)(v6 + 48) |= 2u;
        v19 = *((_QWORD *)BatchFragment + 15);
        *((_DWORD *)BatchFragment + 5) = 8;
        v20 = *(_QWORD *)(v19 + 40);
        if ( (unsigned __int64)(4096 - v20) >= 8 )
        {
          v21 = *(_QWORD *)(v19 + 56);
          *(_QWORD *)(v19 + 40) = v20 + 8;
          v22 = (_QWORD *)(v20 + v21);
          if ( v22 )
          {
            *((_QWORD *)BatchFragment + 17) += 8LL;
            v18 = v22;
          }
        }
        *v18 = a2;
        *(_BYTE *)(*((_QWORD *)BatchFragment + 15) + 64LL) = 0;
        *((_QWORD *)BatchFragment + 8) = 0LL;
        v23 = *(struct _ERESOURCE **)(*(_QWORD *)(v6 + 40) + 8LL);
        KeEnterCriticalRegion();
        ExAcquireResourceSharedLite(v23, 1u);
        if ( v16 && !*((_BYTE *)v16 + 33) )
          DirectComposition::CBatch::SetSynchronizationObject(BatchFragment, v16);
        if ( *(_QWORD *)(v6 + 360) )
        {
          v30 = *(struct _ERESOURCE **)(v6 + 368);
          KeEnterCriticalRegion();
          ExAcquireResourceExclusiveLite(v30, 1u);
        }
        if ( *(int *)(v6 + 24) <= 0
          && (v24 = *(_QWORD *)(v6 + 40),
              v25 = *(struct _ERESOURCE **)(v24 + 8),
              KeEnterCriticalRegion(),
              ExAcquireResourceSharedLite(v25, 1u),
              LODWORD(v25) = *(_DWORD *)(v24 + 148),
              ExReleaseResourceLite(*(PERESOURCE *)(v24 + 8)),
              KeLeaveCriticalRegion(),
              (_DWORD)v25) )
        {
          v26 = *(struct DirectComposition::CBatch **)BatchFragment;
          v27 = *(union _SLIST_HEADER **)(v6 + 40);
          *((_QWORD *)BatchFragment + 3) = *(_QWORD *)BatchFragment;
          if ( v26 )
            *((_QWORD *)v26 + 3) = BatchFragment;
          ExpInterlockedPushEntrySList(v27 + 6, (PSLIST_ENTRY)BatchFragment);
          KeSetEvent(*(PRKEVENT *)(v27[5].Alignment + 8), 1, 0);
        }
        else
        {
          if ( (*((_BYTE *)BatchFragment + 32) & 1) != 0 )
            *(_BYTE *)(v6 + 48) &= ~2u;
          do
          {
            v31 = *(struct DirectComposition::CBatch **)BatchFragment;
            *(_QWORD *)BatchFragment = 0LL;
            DirectComposition::CBatch::ReturnToApplication(BatchFragment, 0);
            BatchFragment = v31;
          }
          while ( v31 );
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
        }
        if ( *(_QWORD *)(v6 + 360) )
        {
          ExReleaseResourceLite(*(PERESOURCE *)(v6 + 368));
          KeLeaveCriticalRegion();
        }
        ExReleaseResourceLite(*(PERESOURCE *)(*(_QWORD *)(v6 + 40) + 8LL));
        KeLeaveCriticalRegion();
        v16 = v34;
      }
      if ( v16 )
        ObfDereferenceObject(v16);
      (**(void (__fastcall ***)(__int64))v6)(v6);
    }
  }
  return (unsigned int)v14;
}
