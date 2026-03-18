/*
 * XREFs of UmfdQueryFont @ 0x1C00D4D30
 * Callers:
 *     <none>
 * Callees:
 *     ?UmfdClientSendAndWaitForCompletion@@YAJW4FontDriverType@@PEAVFontDriverDdiRequest@@@Z @ 0x1C0090638 (-UmfdClientSendAndWaitForCompletion@@YAJW4FontDriverType@@PEAVFontDriverDdiRequest@@@Z.c)
 *     UmfdDrvFreeInternal @ 0x1C02B96C0 (UmfdDrvFreeInternal.c)
 */

__int64 __fastcall UmfdQueryFont(__int64 a1, __int64 a2, int a3, _QWORD *a4)
{
  __int64 result; // rax
  void **v5; // [rsp+20h] [rbp-50h] BYREF
  int v6; // [rsp+28h] [rbp-48h]
  struct _KTHREAD *CurrentThread; // [rsp+30h] [rbp-40h]
  __int64 v8; // [rsp+38h] [rbp-38h]
  __int64 v9; // [rsp+40h] [rbp-30h]
  int v10; // [rsp+48h] [rbp-28h]
  _QWORD *v11; // [rsp+50h] [rbp-20h]
  __int64 v12; // [rsp+58h] [rbp-18h]
  __int128 v13; // [rsp+60h] [rbp-10h]

  *a4 = 0LL;
  v6 = 0;
  v12 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v9 = a2;
  v5 = &QueryFontRequest::`vftable';
  v13 = 0LL;
  v8 = a1;
  v10 = a3;
  v11 = a4;
  if ( (int)UmfdClientSendAndWaitForCompletion(*(_DWORD *)(a2 + 8), (__int64)&v5) < 0 )
    return 0LL;
  result = v12;
  if ( !v12 )
  {
    if ( *((_QWORD *)&v13 + 1) )
      UmfdDrvFreeInternal(*((_QWORD *)&v13 + 1), *v11, *(unsigned int *)(v9 + 8));
    return 0LL;
  }
  return result;
}
