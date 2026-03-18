/*
 * XREFs of ??4?$SmartObjStackRef@UtagPOPUPMENU@@@@QEAAAEAV0@PEAUtagPOPUPMENU@@@Z @ 0x1C0042658
 * Callers:
 *     xxxMNEndMenuState @ 0x1C01EB210 (xxxMNEndMenuState.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall SmartObjStackRef<tagPOPUPMENU>::operator=(_QWORD *a1, __int64 a2)
{
  __int64 v3; // r9
  _QWORD *v4; // r8
  __int64 *v5; // rdx
  _QWORD *v6; // rax
  __int64 v7; // r8

  if ( *a1 != a2 )
  {
    if ( *a1 )
    {
      v3 = a1[1];
      v4 = (_QWORD *)a1[2];
      if ( *(_QWORD **)(v3 + 8) != a1 + 1 || (_QWORD *)*v4 != a1 + 1 )
        __fastfail(3u);
      *v4 = v3;
      *(_QWORD *)(v3 + 8) = v4;
    }
    *a1 = a2;
    if ( a2 )
    {
      v5 = (__int64 *)(a2 + 88);
      v6 = a1 + 1;
      v7 = *v5;
      if ( *(__int64 **)(*v5 + 8) != v5 )
        __fastfail(3u);
      *v6 = v7;
      a1[2] = v5;
      *(_QWORD *)(v7 + 8) = v6;
      *v5 = (__int64)v6;
    }
  }
  return a1;
}
