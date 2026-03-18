/*
 * XREFs of sub_14050F54C @ 0x14050F54C
 * Callers:
 *     sub_14048A4C0 @ 0x14048A4C0 (sub_14048A4C0.c)
 *     sub_14050EEB8 @ 0x14050EEB8 (sub_14050EEB8.c)
 *     WbGetWarbirdThread @ 0x14050EF0C (WbGetWarbirdThread.c)
 *     sub_14050F4E8 @ 0x14050F4E8 (sub_14050F4E8.c)
 *     sub_14053AD6C @ 0x14053AD6C (sub_14053AD6C.c)
 *     sub_14056F0AC @ 0x14056F0AC (sub_14056F0AC.c)
 *     WbFreeUserMemory @ 0x14056F130 (WbFreeUserMemory.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 */

__int64 __fastcall sub_14050F54C(__int64 a1, __int64 a2, unsigned int a3, _QWORD *a4, int *a5)
{
  int v5; // ebp
  int v6; // edi
  int v11; // ebx
  int v12; // esi
  __int64 v13; // rax

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
  if ( a4 && v12 >= 0 )
    *a4 = *(_QWORD *)((unsigned int)(v11 * *(_DWORD *)a1) + *(_QWORD *)(a1 + 16));
  return (unsigned int)v12;
}
