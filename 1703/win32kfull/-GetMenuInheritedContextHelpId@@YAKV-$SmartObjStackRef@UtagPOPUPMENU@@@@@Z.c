/*
 * XREFs of ?GetMenuInheritedContextHelpId@@YAKV?$SmartObjStackRef@UtagPOPUPMENU@@@@@Z @ 0x1C0202ACC
 * Callers:
 *     xxxMNKeyDown @ 0x1C020589C (xxxMNKeyDown.c)
 * Callees:
 *     ??1?$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@XZ @ 0x1C004258C (--1-$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@XZ.c)
 *     safe_cast_fnid_to_PMENUWND @ 0x1C005D060 (safe_cast_fnid_to_PMENUWND.c)
 */

__int64 __fastcall GetMenuInheritedContextHelpId(_QWORD *a1)
{
  _QWORD *v1; // r8
  __int64 v2; // rcx
  unsigned int v3; // ebx
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // r9
  _QWORD *v9; // rdx
  __int64 *v10; // rax
  _QWORD *v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r9
  _QWORD *v15; // rdx
  __int64 *v16; // rcx
  _QWORD *v17; // rax
  __int64 v18; // rdx

  v1 = a1;
  v2 = *a1;
  if ( (*(_DWORD *)v2 & 1) == 0 )
  {
    while ( !*(_DWORD *)(*(_QWORD *)(v2 + 40) + 112LL) )
    {
      if ( (*(_DWORD *)v2 & 2) != 0 && *(_QWORD *)(v2 + 32) == *(_QWORD *)(v2 + 8) )
      {
        v13 = *(_QWORD *)(*v1 + 64LL);
        if ( *v1 != v13 )
        {
          if ( *v1 )
          {
            v14 = v1[1];
            v15 = (_QWORD *)v1[2];
            if ( *(_QWORD **)(v14 + 8) != v1 + 1 || (_QWORD *)*v15 != v1 + 1 )
              __fastfail(3u);
            *v15 = v14;
            *(_QWORD *)(v14 + 8) = v15;
          }
          *v1 = v13;
          if ( v13 )
          {
            v16 = (__int64 *)(v13 + 88);
            v17 = v1 + 1;
            v18 = *v16;
            if ( *(__int64 **)(*v16 + 8) != v16 )
              __fastfail(3u);
            *v17 = v18;
            v1[2] = v16;
            *(_QWORD *)(v18 + 8) = v17;
            *v16 = (__int64)v17;
          }
        }
        break;
      }
      v5 = *(_QWORD *)(v2 + 32);
      if ( v5 )
      {
        v6 = safe_cast_fnid_to_PMENUWND(v5);
        if ( v6 )
        {
          v7 = *(_QWORD *)(v6 + 8);
          if ( *v1 != v7 )
          {
            if ( *v1 )
            {
              v8 = v1[1];
              v9 = (_QWORD *)v1[2];
              if ( *(_QWORD **)(v8 + 8) != v1 + 1 || (_QWORD *)*v9 != v1 + 1 )
                __fastfail(3u);
              *v9 = v8;
              *(_QWORD *)(v8 + 8) = v9;
            }
            *v1 = v7;
            if ( v7 )
            {
              v10 = (__int64 *)(v7 + 88);
              v11 = v1 + 1;
              v12 = *v10;
              if ( *(__int64 **)(*v10 + 8) != v10 )
                __fastfail(3u);
              *v11 = v12;
              v1[2] = v10;
              *(_QWORD *)(v12 + 8) = v11;
              *v10 = (__int64)v11;
            }
          }
          v2 = *v1;
          if ( *v1 )
            continue;
        }
      }
      SmartObjStackRef<tagPOPUPMENU>::~SmartObjStackRef<tagPOPUPMENU>(v1);
      return 0LL;
    }
  }
  v3 = *(_DWORD *)(*(_QWORD *)(*v1 + 40LL) + 112LL);
  SmartObjStackRef<tagPOPUPMENU>::~SmartObjStackRef<tagPOPUPMENU>(v1);
  return v3;
}
