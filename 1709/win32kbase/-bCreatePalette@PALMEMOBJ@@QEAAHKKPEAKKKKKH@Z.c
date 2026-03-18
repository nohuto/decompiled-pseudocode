/*
 * XREFs of ?bCreatePalette@PALMEMOBJ@@QEAAHKKPEAKKKKKH@Z @ 0x1C00A9750
 * Callers:
 *     EngCreatePalette @ 0x1C00F00B0 (EngCreatePalette.c)
 *     ?vDynamicSwitchPalettes@@YAXPEAVSURFACE@@PEAVPDEV@@1@Z @ 0x1C00F4F60 (-vDynamicSwitchPalettes@@YAXPEAVSURFACE@@PEAVPDEV@@1@Z.c)
 *     GreCreatePalette @ 0x1C00FB570 (GreCreatePalette.c)
 *     ?CreateSurfacePal@@YAHVXEPALOBJ@@KKK@Z @ 0x1C00FDCBC (-CreateSurfacePal@@YAHVXEPALOBJ@@KKK@Z.c)
 *     bInitPALOBJ @ 0x1C01DF3FC (bInitPALOBJ.c)
 * Callees:
 *     ?vComputeCallTables@XEPALOBJ@@QEAAXXZ @ 0x1C0041810 (-vComputeCallTables@XEPALOBJ@@QEAAXXZ.c)
 *     AllocateObject @ 0x1C0047B40 (AllocateObject.c)
 *     ?Insert@HmgInsertObjectHelper@@QEAAPEAUHOBJ__@@PEAVOBJECT@@_N1E@Z @ 0x1C0053E50 (-Insert@HmgInsertObjectHelper@@QEAAPEAUHOBJ__@@PEAVOBJECT@@_N1E@Z.c)
 *     FreeObject @ 0x1C0054E50 (FreeObject.c)
 *     ?ParseBits@@YAXKPEAK00K@Z @ 0x1C00703EC (-ParseBits@@YAXKPEAK00K@Z.c)
 *     memset @ 0x1C00ABB80 (memset.c)
 */

__int64 __fastcall PALMEMOBJ::bCreatePalette(
        PALMEMOBJ *this,
        int a2,
        unsigned int a3,
        unsigned int *a4,
        unsigned int a5,
        unsigned int a6,
        unsigned int a7,
        unsigned int a8,
        int a9)
{
  unsigned int v9; // r15d
  size_t v12; // rcx
  unsigned int v13; // esi
  struct OBJECT *Object; // rax
  struct OBJECT *v15; // rdi
  int v16; // r14d
  int v17; // r14d
  int v18; // r14d
  _DWORD *v19; // rcx
  unsigned int *v20; // r8
  unsigned int i; // edx
  __int64 v23; // [rsp+40h] [rbp-48h] BYREF
  _DWORD *v24; // [rsp+48h] [rbp-40h]
  struct OBJECT *v25; // [rsp+50h] [rbp-38h]
  struct OBJECT *v26; // [rsp+58h] [rbp-30h] BYREF
  int v27; // [rsp+98h] [rbp+10h]

  v9 = a3;
  v12 = 144LL;
  switch ( a2 )
  {
    case 1:
      v12 = 4 * a3 + 144;
      v13 = a8 & 0x3102F00;
      if ( !a3 )
        return 0LL;
      break;
    case 2:
      v13 = a8 & 0x3100300;
      v9 = 0;
      if ( !a5 || !a7 || !a6 )
        return 0LL;
      goto LABEL_14;
    case 4:
    case 8:
    case 16:
      v13 = a8 & 0x3100100 | 0x200;
      v9 = 0;
      if ( a2 != 16 )
      {
        if ( a2 == 4 )
        {
          a5 = 255;
          a7 = 16711680;
        }
        else
        {
          a5 = 16711680;
          a7 = 255;
        }
        a6 = 65280;
LABEL_14:
        v12 = 192LL;
      }
      break;
    default:
      return 0LL;
  }
  Object = (struct OBJECT *)AllocateObject(v12, 8u, 0);
  v15 = Object;
  v25 = Object;
  *(_QWORD *)this = Object;
  if ( !Object )
    return 0LL;
  *((_DWORD *)Object + 6) = v13 | a2;
  *((_DWORD *)Object + 7) = v9;
  *((_DWORD *)Object + 8) = _InterlockedIncrement((volatile signed __int32 *)&ulXlatePalUnique);
  *((_QWORD *)Object + 5) = 0LL;
  *((_QWORD *)Object + 6) = 0LL;
  *((_DWORD *)Object + 15) = 0;
  *((_DWORD *)Object + 14) = 0;
  *((_QWORD *)Object + 9) = 0LL;
  *((_QWORD *)Object + 10) = 0LL;
  *((_QWORD *)Object + 11) = 0LL;
  *((_DWORD *)Object + 26) = 0;
  *((_QWORD *)Object + 14) = 0LL;
  *((_QWORD *)Object + 16) = Object;
  *((_QWORD *)Object + 15) = (char *)Object + 136;
  v16 = a2 - 1;
  if ( v16 )
  {
    v17 = v16 - 1;
    if ( !v17 || (v18 = v17 - 2) == 0 || v18 == 4 )
    {
      **(_DWORD **)(*(_QWORD *)this + 120LL) = a5;
      *(_DWORD *)(*(_QWORD *)(*(_QWORD *)this + 120LL) + 4LL) = a6;
      *(_DWORD *)(*(_QWORD *)(*(_QWORD *)this + 120LL) + 8LL) = a7;
      if ( a5 == 255 && a6 == 65280 && a7 == 16711680 )
      {
        *((_DWORD *)Object + 6) |= 4u;
      }
      else if ( a5 == 63488 && a6 == 2016 && a7 == 31 )
      {
        *((_DWORD *)Object + 6) |= 0x400000u;
      }
      else if ( a5 == 31744 && a6 == 992 && a7 == 31 )
      {
        *((_DWORD *)Object + 6) |= 0x200000u;
      }
      ParseBits(
        a5,
        (unsigned int *)(*(_QWORD *)(*(_QWORD *)this + 120LL) + 24LL),
        (unsigned int *)(*(_QWORD *)(*(_QWORD *)this + 120LL) + 12LL),
        (unsigned int *)(*(_QWORD *)(*(_QWORD *)this + 120LL) + 36LL),
        0);
      ParseBits(
        a6,
        (unsigned int *)(*(_QWORD *)(*(_QWORD *)this + 120LL) + 28LL),
        (unsigned int *)(*(_QWORD *)(*(_QWORD *)this + 120LL) + 16LL),
        (unsigned int *)(*(_QWORD *)(*(_QWORD *)this + 120LL) + 40LL),
        8u);
      ParseBits(
        a7,
        (unsigned int *)(*(_QWORD *)(*(_QWORD *)this + 120LL) + 32LL),
        (unsigned int *)(*(_QWORD *)(*(_QWORD *)this + 120LL) + 20LL),
        (unsigned int *)(*(_QWORD *)(*(_QWORD *)this + 120LL) + 44LL),
        0x10u);
    }
  }
  else
  {
    v19 = *(_DWORD **)(*(_QWORD *)this + 120LL);
    v24 = v19;
    v20 = a4;
    if ( a4 )
    {
      for ( i = 0; i < v9; ++i )
      {
        v27 = *v20++;
        *v19++ = v27;
        v24 = v19;
      }
    }
    else if ( v9 )
    {
      memset(v19, 0, 4LL * v9);
    }
  }
  v26 = v15;
  XEPALOBJ::vComputeCallTables((XEPALOBJ *)&v26);
  v23 = 0LL;
  if ( !HmgInsertObjectHelper::Insert((HmgInsertObjectHelper *)&v23, v15, 1u, a9 != 0, 8) )
  {
    if ( v23 )
      _InterlockedDecrement((volatile signed __int32 *)(v23 + 12));
    FreeObject((__int64)v15, 8);
    *(_QWORD *)this = 0LL;
    return 0LL;
  }
  if ( v23 )
    _InterlockedDecrement((volatile signed __int32 *)(v23 + 12));
  return 1LL;
}
