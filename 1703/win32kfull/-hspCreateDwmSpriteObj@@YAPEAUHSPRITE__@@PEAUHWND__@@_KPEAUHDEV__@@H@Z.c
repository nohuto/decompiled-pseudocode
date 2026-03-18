/*
 * XREFs of ?hspCreateDwmSpriteObj@@YAPEAUHSPRITE__@@PEAUHWND__@@_KPEAUHDEV__@@H@Z @ 0x1C001E2A4
 * Callers:
 *     GreTransferSpriteStateToDwmState @ 0x1C001665C (GreTransferSpriteStateToDwmState.c)
 *     ?GreCreateSpriteInternal@@YAPEAXPEAUHDEV__@@PEAUHWND__@@PEAUtagRECT@@PEAUtagMINIWINDOWINFO@@HHHHHPEAG@Z @ 0x1C0020FA4 (-GreCreateSpriteInternal@@YAPEAXPEAUHDEV__@@PEAUHWND__@@PEAUtagRECT@@PEAUtagMINIWINDOWINFO@@HHHH.c)
 * Callees:
 *     SFMLOGICALSURFACEREF_vDestructorWrap @ 0x1C0023CF0 (SFMLOGICALSURFACEREF_vDestructorWrap.c)
 *     ?LockLogicalSurfaceObj@SFMLOGICALSURFACEREF@@AEAAXPEAUHLSURF__@@@Z @ 0x1C0023D38 (-LockLogicalSurfaceObj@SFMLOGICALSURFACEREF@@AEAAXPEAUHLSURF__@@@Z.c)
 *     ?LockSpriteObj@DWMSPRITEREF@@AEAAXPEAUHSPRITE__@@@Z @ 0x1C002574C (-LockSpriteObj@DWMSPRITEREF@@AEAAXPEAUHSPRITE__@@@Z.c)
 *     ?vspDestroyDwmSpriteObjInternal@@YAXPEAUHDEV__@@_NPEAVDWMSPRITE@@@Z @ 0x1C00264A0 (-vspDestroyDwmSpriteObjInternal@@YAXPEAUHDEV__@@_NPEAVDWMSPRITE@@@Z.c)
 *     ?SetLogicalSurface@DWMSPRITE@@QEAAXPEAUHDEV__@@PEAVSFMLOGICALSURFACE@@@Z @ 0x1C00265B8 (-SetLogicalSurface@DWMSPRITE@@QEAAXPEAUHDEV__@@PEAVSFMLOGICALSURFACE@@@Z.c)
 *     ?hlsurfCreateLogicalSurfaceObject@@YAPEAUHLSURF__@@QEAUHDEV__@@KPEAU_CD_HLSURF_CREATIONCONTEXT@@@Z @ 0x1C0028458 (-hlsurfCreateLogicalSurfaceObject@@YAPEAUHLSURF__@@QEAUHDEV__@@KPEAU_CD_HLSURF_CREATIONCONTEXT@@.c)
 *     ?Insert@HmgInsertObjectHelper@@QEAAPEAUHOBJ__@@PEAVOBJECT@@_N1E@Z @ 0x1C002B5F8 (-Insert@HmgInsertObjectHelper@@QEAAPEAUHOBJ__@@PEAVOBJECT@@_N1E@Z.c)
 *     ?hspGetNeighborSprite@@YAPEAUHSPRITE__@@PEAU1@_N1@Z @ 0x1C00FC7FC (-hspGetNeighborSprite@@YAPEAUHSPRITE__@@PEAU1@_N1@Z.c)
 */

__int64 __fastcall hspCreateDwmSpriteObj(HWND a1, __int64 a2, HDEV a3, int a4)
{
  __int64 v4; // rbx
  __int64 Object; // rax
  volatile signed __int32 *v10; // rdi
  struct DwmState *v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // rcx
  HSPRITE v14; // rcx
  HSPRITE NeighborSprite; // rax
  __int64 v16; // rax
  __int64 v17; // r8
  __int64 v18; // rcx
  struct DwmState **v19; // rcx
  __int64 v20; // rax
  struct DwmState **v21; // rcx
  __int64 v22; // rax
  HLSURF LogicalSurfaceObject; // rax
  HDEV v24; // rdx
  unsigned __int8 NewElement[8]; // [rsp+30h] [rbp-50h] BYREF
  __int64 v27; // [rsp+38h] [rbp-48h] BYREF
  __int64 v28; // [rsp+40h] [rbp-40h] BYREF
  struct SFMLOGICALSURFACE *v29; // [rsp+48h] [rbp-38h] BYREF
  int v30; // [rsp+50h] [rbp-30h]
  _QWORD Buffer[2]; // [rsp+58h] [rbp-28h] BYREF
  _QWORD v32[3]; // [rsp+68h] [rbp-18h] BYREF

  v4 = 0LL;
  memset(v32, 0, sizeof(v32));
  Object = AllocateObject(208LL, 15LL, 1LL);
  v10 = (volatile signed __int32 *)Object;
  if ( !Object )
    return v4;
  v11 = (struct DwmState *)(Object + 24);
  NewElement[0] = 0;
  *(_QWORD *)(Object + 32) = Object + 24;
  *(_QWORD *)(Object + 24) = Object + 24;
  v28 = 0LL;
  ++*((_DWORD *)g_pDwmState + 24);
  if ( HmgInsertObjectHelper::Insert((HmgInsertObjectHelper *)&v28, (struct OBJECT *)Object, 0, 1, 15) )
  {
    v13 = *(_QWORD *)v10;
    LOBYTE(v12) = 15;
    NewElement[0] = 1;
    HmgMarkUndeletable(v13, v12);
    v14 = (HSPRITE)*((_QWORD *)g_pDwmState + 18);
    if ( v14 )
    {
      NeighborSprite = hspGetNeighborSprite(v14, 0, 0);
      if ( NeighborSprite )
      {
        v27 = 0LL;
        DWMSPRITEREF::LockSpriteObj((DWMSPRITEREF *)&v27, NeighborSprite);
        v16 = v27;
        v17 = (v27 + 24) & -(__int64)(v27 != 0);
        v18 = *(_QWORD *)v17;
        if ( *(_QWORD *)(*(_QWORD *)v17 + 8LL) != v17 )
          __fastfail(3u);
        *(_QWORD *)v11 = v18;
        *((_QWORD *)v11 + 1) = v17;
        *(_QWORD *)(v18 + 8) = v11;
        *(_QWORD *)v17 = v11;
        if ( v16 )
          _InterlockedDecrement((volatile signed __int32 *)(v16 + 12));
      }
      else
      {
        v19 = (struct DwmState **)((char *)g_pDwmState + 80);
        v20 = *((_QWORD *)g_pDwmState + 10);
        if ( *(struct DwmState **)(v20 + 8) != (struct DwmState *)((char *)g_pDwmState + 80) )
          __fastfail(3u);
        *(_QWORD *)v11 = v20;
        *((_QWORD *)v11 + 1) = v19;
        *(_QWORD *)(v20 + 8) = v11;
        *v19 = v11;
      }
    }
    else
    {
      v21 = (struct DwmState **)*((_QWORD *)g_pDwmState + 11);
      if ( *v21 != (struct DwmState *)((char *)g_pDwmState + 80) )
        __fastfail(3u);
      *(_QWORD *)v11 = (char *)g_pDwmState + 80;
      *((_QWORD *)v11 + 1) = v21;
      *v21 = v11;
      *((_QWORD *)g_pDwmState + 11) = v11;
    }
    if ( a1 )
    {
      v22 = *(_QWORD *)v10;
      *((_QWORD *)v10 + 5) = a1;
      Buffer[0] = a1;
      Buffer[1] = v22;
      RtlInsertElementGenericTable((PRTL_GENERIC_TABLE)g_pDwmState, Buffer, 0x10u, NewElement);
    }
    if ( !NewElement[0] )
      goto LABEL_22;
    EtwDwmSpriteCreateEvent(a1, *(_QWORD *)v10);
    v32[0] = a1;
    LogicalSurfaceObject = hlsurfCreateLogicalSurfaceObject(
                             a3,
                             (unsigned int)(a4 != 0) + 4,
                             (struct _CD_HLSURF_CREATIONCONTEXT *)v32);
    if ( LogicalSurfaceObject )
    {
      v29 = 0LL;
      v30 = 0;
      SFMLOGICALSURFACEREF::LockLogicalSurfaceObj((SFMLOGICALSURFACEREF *)&v29, LogicalSurfaceObject);
      DWMSPRITE::SetLogicalSurface((DWMSPRITE *)v10, v24, v29);
      SFMLOGICALSURFACEREF_vDestructorWrap(&v29);
    }
    else
    {
      NewElement[0] = 0;
    }
  }
  if ( !NewElement[0] )
LABEL_22:
    _InterlockedIncrement(v10 + 3);
  if ( v28 )
    _InterlockedDecrement((volatile signed __int32 *)(v28 + 12));
  if ( NewElement[0] )
  {
    GreInitializePushLock(v10 + 30);
    v4 = *(_QWORD *)v10;
    *((_QWORD *)v10 + 6) = a2;
  }
  else
  {
    vspDestroyDwmSpriteObjInternal(a3, 1, (struct DWMSPRITE *)v10);
  }
  return v4;
}
