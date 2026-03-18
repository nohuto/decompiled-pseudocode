/*
 * XREFs of WmipFindMRByNames @ 0x1405C808C
 * Callers:
 *     WmipAddMofResource @ 0x1405C7E4C (WmipAddMofResource.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14006D2F0 (KeWaitForSingleObject.c)
 *     KeReleaseMutex @ 0x1400760B0 (KeReleaseMutex.c)
 *     WmipReferenceEntry @ 0x14051F7B4 (WmipReferenceEntry.c)
 */

_QWORD *__fastcall WmipFindMRByNames(__int64 a1, __int64 a2)
{
  _QWORD *v4; // rbx
  unsigned __int16 *v5; // rax
  __int64 v6; // rdx
  int v7; // r8d
  int v8; // ecx
  unsigned __int16 *v9; // rax
  __int64 v10; // rdx
  int v11; // r8d
  int v12; // ecx

  KeWaitForSingleObject(&WmipSMMutex, Executive, 0, 0, 0LL);
  v4 = *(_QWORD **)WmipMRHeadPtr;
  if ( *(_QWORD *)WmipMRHeadPtr == WmipMRHeadPtr )
  {
LABEL_7:
    v4 = 0LL;
  }
  else
  {
    while ( 1 )
    {
      v5 = (unsigned __int16 *)v4[5];
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
        v9 = (unsigned __int16 *)v4[6];
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
      v4 = (_QWORD *)*v4;
      if ( v4 == (_QWORD *)WmipMRHeadPtr )
        goto LABEL_7;
    }
    WmipReferenceEntry((ULONG_PTR)v4);
  }
  KeReleaseMutex(&WmipSMMutex, 0);
  return v4;
}
