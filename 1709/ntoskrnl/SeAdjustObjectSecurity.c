/*
 * XREFs of SeAdjustObjectSecurity @ 0x140730224
 * Callers:
 *     CmpSetSecurityDescriptorInfo @ 0x140476DE8 (CmpSetSecurityDescriptorInfo.c)
 * Callees:
 *     _TlgWrite @ 0x1400AE914 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1400BA32C (_TlgKeywordOn.c)
 *     PsGetCurrentThreadProcess @ 0x14015C0D0 (PsGetCurrentThreadProcess.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     SepCheckForCriticalAceRemoval @ 0x14046CC94 (SepCheckForCriticalAceRemoval.c)
 *     PsGetAllocatedFullProcessImageNameEx @ 0x14057D374 (PsGetAllocatedFullProcessImageNameEx.c)
 *     SepBuildObjectSecurityDescriptor @ 0x140730628 (SepBuildObjectSecurityDescriptor.c)
 */

__int64 __fastcall SeAdjustObjectSecurity(__int64 a1, void *a2, void *a3, _QWORD *a4, _BYTE *a5)
{
  int v5; // edi
  int v6; // ebx
  char v8; // si
  int v9; // r9d
  int v10; // r8d
  int v11; // ebx
  _KPROCESS *CurrentThreadProcess; // rax
  int v13; // r8d
  __int64 v14; // rdx
  char v16; // [rsp+40h] [rbp-41h] BYREF
  char v17[15]; // [rsp+41h] [rbp-40h] BYREF
  __int64 v18; // [rsp+50h] [rbp-31h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+60h] [rbp-21h] BYREF
  _DWORD *v20; // [rsp+80h] [rbp-1h]
  int v21; // [rsp+88h] [rbp+7h]
  int v22; // [rsp+8Ch] [rbp+Bh]
  __int64 v23; // [rsp+90h] [rbp+Fh]
  _DWORD v24[2]; // [rsp+98h] [rbp+17h] BYREF

  *a4 = 0LL;
  v5 = (int)a3;
  *(_QWORD *)&v17[7] = 0LL;
  v6 = (int)a2;
  *a5 = 0;
  SepCheckForCriticalAceRemoval(a2, a3, &v17[2], &v16, &v17[1], v17);
  v8 = v17[0];
  LOBYTE(v9) = v16;
  LOBYTE(v10) = v17[2];
  v11 = SepBuildObjectSecurityDescriptor(v6, v5, v10, v9, v17[1], v17[0], (__int64)&v18);
  if ( v11 >= 0 )
  {
    *a4 = v18;
    *a5 = 1;
  }
  if ( !v16 && !v8 )
  {
    CurrentThreadProcess = PsGetCurrentThreadProcess();
    if ( (int)PsGetAllocatedFullProcessImageNameEx((__int64)CurrentThreadProcess, (__int64)&v17[7]) >= 0
      && stru_140355440.LevelPlus1 > 5
      && TlgKeywordOn(&stru_140355440, 0x200000000000uLL) )
    {
      v13 = (unsigned __int16)**(_WORD **)&v17[7];
      v14 = *(_QWORD *)(*(_QWORD *)&v17[7] + 8LL);
      v22 = 0;
      v24[1] = 0;
      v20 = v24;
      v21 = 2;
      v23 = v14;
      v24[0] = v13;
      TlgWrite(&stru_140355440, &unk_1402D4078, 0LL, 0LL, 4u, &pData);
    }
  }
  if ( *(_QWORD *)&v17[7] )
    ExFreePoolWithTag(*(PVOID *)&v17[7], 0);
  return (unsigned int)v11;
}
