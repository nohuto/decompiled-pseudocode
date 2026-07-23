/*
 * XREFs of EtwpRegisterGuidsApiCallback @ 0x1800641B8
 * Callers:
 *     EtwpUpdateEnableInfoAndCallback @ 0x180036244 (EtwpUpdateEnableInfoAndCallback.c)
 *     EtwpCheckForPrivatePreEnable @ 0x1800369D8 (EtwpCheckForPrivatePreEnable.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180038940 (RtlReleaseSRWLockExclusive.c)
 *     EtwpAcquireGuidEntryExclusive @ 0x1800642DC (EtwpAcquireGuidEntryExclusive.c)
 *     __security_check_cookie @ 0x180090C90 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800A3A60 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1800A6C80 (memset.c)
 */

__int64 __fastcall EtwpRegisterGuidsApiCallback(__int64 a1, __int64 a2, char a3)
{
  __int64 v3; // rbp
  unsigned int v7; // ebx
  __int64 v8; // rdx
  int v9; // r15d
  unsigned int v10; // esi
  __int64 v11; // rax
  __int128 v12; // xmm0
  unsigned int (__fastcall *v13)(_QWORD, __int64, int *, _QWORD *); // r10
  __int64 v14; // rdx
  int v16; // [rsp+30h] [rbp-68h] BYREF
  _QWORD v17[6]; // [rsp+38h] [rbp-60h] BYREF

  v3 = *(_QWORD *)(a2 + 248);
  v7 = 0;
  memset(v17, 0, sizeof(v17));
  v9 = *(_DWORD *)(a1 + 112);
  if ( v9 )
  {
    if ( v9 == 1 )
    {
      v10 = 4;
    }
    else
    {
      if ( v9 != 2 )
        return 0LL;
      v10 = 10;
    }
  }
  else
  {
    v10 = 5;
    *(_BYTE *)(a1 + 106) = 0;
    *(_DWORD *)(a1 + 108) = 0;
  }
  if ( !a3 && v3 && v10 != 10 && *(_BYTE *)(a1 + 107) == 1 )
  {
    EtwpAcquireGuidEntryExclusive(v3, v8);
    *(_QWORD *)(v3 + 152) = *(_QWORD *)(a1 + 104);
    *(_DWORD *)(v3 + 160) = v9;
    *(_DWORD *)(v3 + 48) = 0;
    RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(v3 + 40));
  }
  v11 = *(_QWORD *)(a2 + 56);
  v12 = *(_OWORD *)(a1 + 40);
  v13 = *(unsigned int (__fastcall **)(_QWORD, __int64, int *, _QWORD *))v11;
  v14 = *(_QWORD *)(v11 + 8);
  v17[1] = *(_QWORD *)(a1 + 104);
  LODWORD(v17[0]) = 48;
  HIDWORD(v17[0]) = v10;
  v16 = 48;
  *(_OWORD *)&v17[3] = v12;
  if ( v13 )
    return v13(v10, v14, &v16, v17);
  return v7;
}
