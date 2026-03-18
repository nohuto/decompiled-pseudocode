/*
 * XREFs of ?bCreatePalette@PALMEMOBJ@@QEAAHKKPEAKKKKKH@Z @ 0x1C009FAA0
 * Callers:
 *     EngCreatePalette @ 0x1C00EC160 (EngCreatePalette.c)
 *     ?vDynamicSwitchPalettes@@YAXPEAVSURFACE@@PEAVPDEV@@1@Z @ 0x1C00F2AF0 (-vDynamicSwitchPalettes@@YAXPEAVSURFACE@@PEAVPDEV@@1@Z.c)
 *     GreCreatePalette @ 0x1C00FB180 (GreCreatePalette.c)
 *     ?CreateSurfacePal@@YAHVXEPALOBJ@@KKK@Z @ 0x1C00FD7E0 (-CreateSurfacePal@@YAHVXEPALOBJ@@KKK@Z.c)
 *     bInitPALOBJ @ 0x1C01D7B18 (bInitPALOBJ.c)
 * Callees:
 *     FreeObject @ 0x1C0037CE0 (FreeObject.c)
 *     AllocateObject @ 0x1C003C340 (AllocateObject.c)
 *     ?Insert@HmgInsertObjectHelper@@QEAAPEAUHOBJ__@@PEAVOBJECT@@_N1E@Z @ 0x1C003F4EC (-Insert@HmgInsertObjectHelper@@QEAAPEAUHOBJ__@@PEAVOBJECT@@_N1E@Z.c)
 *     ?vComputeCallTables@XEPALOBJ@@QEAAXXZ @ 0x1C0059F90 (-vComputeCallTables@XEPALOBJ@@QEAAXXZ.c)
 *     ?ParseBits@@YAXKPEAK00K@Z @ 0x1C0076C00 (-ParseBits@@YAXKPEAK00K@Z.c)
 *     memset @ 0x1C00A2500 (memset.c)
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
  __int64 Object; // rax
  struct OBJECT *v15; // rdi
  int v16; // r14d
  int v17; // r14d
  int v18; // r14d
  _DWORD *v19; // rcx
  unsigned int *v20; // r8
  unsigned int i; // edx
  __int64 v23; // [rsp+40h] [rbp-48h] BYREF
  _DWORD *v24; // [rsp+48h] [rbp-40h]
  __int64 v25; // [rsp+50h] [rbp-38h]
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
  Object = AllocateObject(v12, 8u, 0);
  v15 = (struct OBJECT *)Object;
  v25 = Object;
  *(_QWORD *)this = Object;
  if ( !Object )
    return 0LL;
  *(_DWORD *)(Object + 24) = v13 | a2;
  *(_DWORD *)(Object + 28) = v9;
  *(_DWORD *)(Object + 32) = _InterlockedIncrement((volatile signed __int32 *)&ulXlatePalUnique);
  *(_QWORD *)(Object + 40) = 0LL;
  *(_QWORD *)(Object + 48) = 0LL;
  *(_DWORD *)(Object + 60) = 0;
  *(_DWORD *)(Object + 56) = 0;
  *(_QWORD *)(Object + 72) = 0LL;
  *(_QWORD *)(Object + 80) = 0LL;
  *(_QWORD *)(Object + 88) = 0LL;
  *(_DWORD *)(Object + 104) = 0;
  *(_QWORD *)(Object + 112) = 0LL;
  *(_QWORD *)(Object + 128) = Object;
  *(_QWORD *)(Object + 120) = Object + 136;
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
        *(_DWORD *)(Object + 24) |= 4u;
      }
      else if ( a5 == 63488 && a6 == 2016 && a7 == 31 )
      {
        *(_DWORD *)(Object + 24) |= 0x400000u;
      }
      else if ( a5 == 31744 && a6 == 992 && a7 == 31 )
      {
        *(_DWORD *)(Object + 24) |= 0x200000u;
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
  if ( !HmgInsertObjectHelper::Insert((HmgInsertObjectHelper *)&v23, v15, 1, a9 != 0, 8u) )
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
