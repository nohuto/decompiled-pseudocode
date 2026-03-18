/*
 * XREFs of MiDeleteInsertedCloneVads @ 0x1406EC594
 * Callers:
 *     MiCloneProcessAddressSpace @ 0x14057A87C (MiCloneProcessAddressSpace.c)
 * Callees:
 *     MiReferenceVad @ 0x14003D48C (MiReferenceVad.c)
 *     MiLockVad @ 0x14003D4A0 (MiLockVad.c)
 *     MiDeleteVad @ 0x1400579B0 (MiDeleteVad.c)
 *     KiStackAttachProcess @ 0x1400A0410 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400BF430 (KiUnstackDetachProcess.c)
 *     MiDeleteCloneDescriptor @ 0x140131B84 (MiDeleteCloneDescriptor.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 */

__int64 __fastcall MiDeleteInsertedCloneVads(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rbp
  _QWORD *v3; // rax
  _QWORD *v4; // rbx
  _QWORD *v5; // rax
  __int64 v6; // rsi
  _QWORD *v7; // rcx
  __int64 v8; // rcx
  _QWORD *v9; // rax
  _QWORD *v10; // rdx
  $709EDFC2F9E0D4565D6AA3C4377BC643 v12; // [rsp+20h] [rbp-48h] BYREF

  CurrentThread = KeGetCurrentThread();
  KiStackAttachProcess((_KPROCESS *)a1, 0, (__int64)&v12);
  *(_BYTE *)(*(_QWORD *)(a1 + 1296) + 233LL) |= 1u;
  v3 = *(_QWORD **)(a1 + 1576);
  v4 = 0LL;
  while ( v3 )
  {
    v4 = v3;
    v3 = (_QWORD *)*v3;
  }
  while ( v4 )
  {
    v5 = (_QWORD *)v4[1];
    v6 = (__int64)v4;
    v7 = v4;
    if ( v5 )
    {
      do
      {
        v4 = v5;
        v5 = (_QWORD *)*v5;
      }
      while ( v5 );
    }
    else
    {
      while ( 1 )
      {
        v4 = (_QWORD *)(v4[2] & 0xFFFFFFFFFFFFFFFCuLL);
        if ( !v4 || (_QWORD *)*v4 == v7 )
          break;
        v7 = v4;
      }
    }
    MiLockVad((__int64)CurrentThread, v6);
    MiReferenceVad(v6);
    MiDeleteVad(v8, 0);
  }
  while ( 1 )
  {
    v9 = *(_QWORD **)(a1 + 912);
    if ( !v9 )
      break;
    do
    {
      v10 = v9;
      v9 = (_QWORD *)*v9;
    }
    while ( v9 );
    v10[6] = 0LL;
    MiDeleteCloneDescriptor((struct _KPROCESS *)a1, v10);
  }
  return KiUnstackDetachProcess(&v12, 0LL);
}
