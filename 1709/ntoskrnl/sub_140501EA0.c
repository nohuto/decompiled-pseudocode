/*
 * XREFs of sub_140501EA0 @ 0x140501EA0
 * Callers:
 *     sub_14044A7A8 @ 0x14044A7A8 (sub_14044A7A8.c)
 *     WbFindWarbirdProcess @ 0x1404FC188 (WbFindWarbirdProcess.c)
 *     sub_14050182C @ 0x14050182C (sub_14050182C.c)
 *     WbGetWarbirdThread @ 0x140501880 (WbGetWarbirdThread.c)
 *     WbGetWarbirdProcess @ 0x140501C80 (WbGetWarbirdProcess.c)
 *     sub_14057660C @ 0x14057660C (sub_14057660C.c)
 *     WbFreeUserMemory @ 0x140577424 (WbFreeUserMemory.c)
 *     sub_140583CB0 @ 0x140583CB0 (sub_140583CB0.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 */

__int64 __fastcall sub_140501EA0(__int64 a1, __int64 a2, unsigned int a3, _QWORD *a4, int *a5)
{
  int v5; // ebp
  int v6; // esi
  int v11; // ebx
  int v12; // r14d
  __int64 v13; // rax
  __int64 result; // rax

  v5 = 0;
  v6 = *(_DWORD *)(a1 + 4) - 1;
  v11 = 0;
  v12 = -1073741198;
  if ( v6 >= 0 )
  {
    while ( 1 )
    {
      v11 = (v6 + v5) / 2;
      v13 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(a1 + 32))(
              *(_QWORD *)((unsigned int)(v11 * *(_DWORD *)a1) + *(_QWORD *)(a1 + 16)),
              a2,
              a3);
      if ( !v13 )
        break;
      if ( v13 < 0 )
        v6 = v11 - 1;
      else
        v5 = ++v11;
      if ( v5 > v6 )
        goto LABEL_8;
    }
    v12 = 0;
  }
LABEL_8:
  if ( a5 )
    *a5 = v11;
  result = (unsigned int)v12;
  if ( a4 )
  {
    if ( v12 >= 0 )
      *a4 = *(_QWORD *)((unsigned int)(v11 * *(_DWORD *)a1) + *(_QWORD *)(a1 + 16));
  }
  return result;
}
