/*
 * XREFs of ?ProcessChannelMessage@DXG_HOST_COMPOSITIONOBJECTCHANNEL@@UEAAJPEAXI@Z @ 0x1C01BE3C0
 * Callers:
 *     <none>
 * Callees:
 *     ?Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C000BC94 (-Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z.c)
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C001C940 (memset.c)
 */

__int64 __fastcall DXG_HOST_COMPOSITIONOBJECTCHANNEL::ProcessChannelMessage(
        struct _KPROCESS **this,
        int *a2,
        __int64 a3)
{
  __int64 v3; // rbx
  _QWORD *v6; // rax
  __int64 v8; // rcx
  int v9; // eax
  struct _KPROCESS *v10; // rdx
  __int64 v11; // r8
  unsigned int v12; // eax
  struct _KPROCESS *v13; // rdx
  unsigned int v14; // eax
  struct _KPROCESS *v15; // rdx
  struct _KAPC_STATE ApcState; // [rsp+20h] [rbp-60h] BYREF
  char v17; // [rsp+50h] [rbp-30h]
  _OWORD v18[2]; // [rsp+58h] [rbp-28h] BYREF

  v3 = (unsigned int)a3;
  if ( (unsigned int)a3 < 0xC )
  {
    v6 = (_QWORD *)WdLogNewEntry5_WdWarning(this, a2, a3);
    v6[3] = v3;
LABEL_3:
    v6[4] = -1073741811LL;
LABEL_4:
    WdLogEvent5_WdWarning(v6);
    return 3221225485LL;
  }
  v8 = (unsigned int)(a2[2] - 1);
  if ( a2[2] == 1 )
  {
    if ( (_DWORD)a3 == 16 )
    {
      memset(v18, 0, sizeof(v18));
      v14 = a2[1];
      v15 = this[3];
      LODWORD(v18[0]) = 1886220131;
      v18[1] = 0LL;
      *(_QWORD *)((char *)v18 + 4) = v14 | 0x200000000LL;
      v17 = 0;
      CPROCESSATTACHHELPER::Attach(&ApcState, v15);
      DWORD1(v18[0]) = -1073741822;
      if ( v17 )
        KeUnstackDetachProcess(&ApcState);
      v11 = 32LL;
      goto LABEL_29;
    }
    goto LABEL_25;
  }
  v8 = (unsigned int)(a2[2] - 3);
  if ( a2[2] == 3 )
  {
    if ( (_DWORD)a3 == 24 )
    {
      *((_QWORD *)&v18[0] + 1) = 4LL;
      goto LABEL_13;
    }
    goto LABEL_25;
  }
  v8 = (unsigned int)(a2[2] - 5);
  if ( a2[2] == 5 )
  {
    if ( (_DWORD)a3 == 1000 )
    {
      memset(v18, 0, 24);
      v12 = a2[1];
      v13 = this[3];
      LODWORD(v18[0]) = 1886220131;
      *(_QWORD *)((char *)v18 + 4) = v12 | 0x600000000LL;
      v17 = 0;
      CPROCESSATTACHHELPER::Attach(&ApcState, v13);
      DWORD1(v18[0]) = -1073741822;
      if ( v17 )
        KeUnstackDetachProcess(&ApcState);
      v11 = 24LL;
      goto LABEL_29;
    }
    goto LABEL_25;
  }
  v8 = (unsigned int)(a2[2] - 7);
  if ( a2[2] == 7 )
  {
    if ( (_DWORD)a3 == 24 )
    {
      *((_QWORD *)&v18[0] + 1) = 8LL;
      goto LABEL_13;
    }
LABEL_25:
    v6 = (_QWORD *)WdLogNewEntry5_WdWarning(v8, a2, a3);
    v6[3] = a2[2];
    v6[4] = v3;
    v6[5] = -1073741811LL;
    goto LABEL_4;
  }
  if ( a2[2] != 9 )
  {
    v6 = (_QWORD *)WdLogNewEntry5_WdWarning(v8, a2, a3);
    v6[3] = a2[2];
    goto LABEL_3;
  }
  if ( (_DWORD)a3 != 520 )
    goto LABEL_25;
  *((_QWORD *)&v18[0] + 1) = 10LL;
LABEL_13:
  *(_QWORD *)&v18[0] = 0LL;
  v9 = a2[1];
  v10 = this[3];
  LODWORD(v18[0]) = 1886220131;
  DWORD1(v18[0]) = v9;
  v17 = 0;
  CPROCESSATTACHHELPER::Attach(&ApcState, v10);
  DWORD1(v18[0]) = -1073741822;
  if ( v17 )
    KeUnstackDetachProcess(&ApcState);
  v11 = 16LL;
LABEL_29:
  (*(void (__fastcall **)(struct _KPROCESS *, _OWORD *, __int64))(*(_QWORD *)this[1] + 24LL))(this[1], v18, v11);
  return 0LL;
}
