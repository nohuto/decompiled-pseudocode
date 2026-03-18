/*
 * XREFs of WmipFindMRByNames @ 0x1405A14F4
 * Callers:
 *     WmipAddMofResource @ 0x1405A12B0 (WmipAddMofResource.c)
 * Callees:
 *     KeReleaseMutex @ 0x1400DDCF0 (KeReleaseMutex.c)
 *     KeWaitForSingleObject @ 0x1400EA280 (KeWaitForSingleObject.c)
 *     WmipReferenceEntry @ 0x14055536C (WmipReferenceEntry.c)
 */

_QWORD *__fastcall WmipFindMRByNames(__int64 a1, __int64 a2)
{
  _QWORD *i; // rbx
  unsigned __int16 *v5; // rax
  __int64 v6; // rdx
  int v7; // r8d
  int v8; // ecx
  unsigned __int16 *v9; // rax
  __int64 v10; // rdx
  int v11; // r8d
  int v12; // ecx

  KeWaitForSingleObject(&WmipSMMutex, Executive, 0, 0, 0LL);
  for ( i = *(_QWORD **)WmipMRHeadPtr; ; i = (_QWORD *)*i )
  {
    if ( i == (_QWORD *)WmipMRHeadPtr )
    {
      i = 0LL;
      goto LABEL_14;
    }
    v5 = (unsigned __int16 *)i[5];
    v6 = a1 - (_QWORD)v5;
    do
    {
      v7 = *(unsigned __int16 *)((char *)v5 + v6);
      v8 = *v5 - v7;
      if ( v8 )
        break;
      ++v5;
    }
    while ( v7 );
    if ( !v8 )
    {
      v9 = (unsigned __int16 *)i[6];
      v10 = a2 - (_QWORD)v9;
      do
      {
        v11 = *(unsigned __int16 *)((char *)v9 + v10);
        v12 = *v9 - v11;
        if ( v12 )
          break;
        ++v9;
      }
      while ( v11 );
      if ( !v12 )
        break;
    }
  }
  WmipReferenceEntry((ULONG_PTR)i);
LABEL_14:
  KeReleaseMutex(&WmipSMMutex, 0);
  return i;
}
