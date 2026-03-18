/*
 * XREFs of ?hspCreateDwmSpriteObj@@YAPEAUHSPRITE__@@PEAUHWND__@@_KPEAUHDEV__@@H@Z @ 0x1C008C1C8
 * Callers:
 *     GreTransferSpriteStateToDwmState @ 0x1C0044FBC (GreTransferSpriteStateToDwmState.c)
 *     ?GreCreateSpriteInternal@@YAPEAXPEAUHDEV__@@PEAUHWND__@@PEAUtagRECT@@PEAUtagMINIWINDOWINFO@@KHHHHHPEAG@Z @ 0x1C008F420 (-GreCreateSpriteInternal@@YAPEAXPEAUHDEV__@@PEAUHWND__@@PEAUtagRECT@@PEAUtagMINIWINDOWINFO@@KHHH.c)
 * Callees:
 *     ?hlsurfCreateLogicalSurfaceObject@@YAPEAUHLSURF__@@QEAUHDEV__@@KPEAU_CD_HLSURF_CREATIONCONTEXT@@@Z @ 0x1C008C3D0 (-hlsurfCreateLogicalSurfaceObject@@YAPEAUHLSURF__@@QEAUHDEV__@@KPEAU_CD_HLSURF_CREATIONCONTEXT@@.c)
 *     ?vspDestroyDwmSpriteObjInternal@@YAXPEAUHDEV__@@_NPEAVDWMSPRITE@@@Z @ 0x1C008E7F0 (-vspDestroyDwmSpriteObjInternal@@YAXPEAUHDEV__@@_NPEAVDWMSPRITE@@@Z.c)
 *     ?SetLogicalSurface@DWMSPRITE@@QEAAXPEAUHDEV__@@PEAVSFMLOGICALSURFACE@@@Z @ 0x1C008E908 (-SetLogicalSurface@DWMSPRITE@@QEAAXPEAUHDEV__@@PEAVSFMLOGICALSURFACE@@@Z.c)
 *     SFMLOGICALSURFACEREF_vDestructorWrap @ 0x1C0091650 (SFMLOGICALSURFACEREF_vDestructorWrap.c)
 *     ?LockLogicalSurfaceObj@SFMLOGICALSURFACEREF@@AEAAXPEAUHLSURF__@@@Z @ 0x1C009169C (-LockLogicalSurfaceObj@SFMLOGICALSURFACEREF@@AEAAXPEAUHLSURF__@@@Z.c)
 *     ?LockSpriteObj@DWMSPRITEREF@@AEAAXPEAUHSPRITE__@@@Z @ 0x1C0092094 (-LockSpriteObj@DWMSPRITEREF@@AEAAXPEAUHSPRITE__@@@Z.c)
 *     ?Insert@HmgInsertObjectHelper@@QEAAPEAUHOBJ__@@PEAVOBJECT@@EK@Z @ 0x1C00B1B34 (-Insert@HmgInsertObjectHelper@@QEAAPEAUHOBJ__@@PEAVOBJECT@@EK@Z.c)
 *     ?hspGetNeighborSprite@@YAPEAUHSPRITE__@@PEAU1@_N1@Z @ 0x1C01083FC (-hspGetNeighborSprite@@YAPEAUHSPRITE__@@PEAU1@_N1@Z.c)
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
  struct DwmState **v15; // rcx
  __int64 v16; // rax
  HLSURF LogicalSurfaceObject; // rax
  HDEV v18; // rdx
  HSPRITE NeighborSprite; // rax
  struct DwmState **v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // r8
  __int64 v25; // rcx
  unsigned __int8 NewElement[8]; // [rsp+20h] [rbp-50h] BYREF
  __int64 v27; // [rsp+28h] [rbp-48h] BYREF
  __int64 v28; // [rsp+30h] [rbp-40h] BYREF
  struct SFMLOGICALSURFACE *v29; // [rsp+38h] [rbp-38h] BYREF
  int v30; // [rsp+40h] [rbp-30h]
  _QWORD Buffer[2]; // [rsp+48h] [rbp-28h] BYREF
  _QWORD v32[3]; // [rsp+58h] [rbp-18h] BYREF

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
  if ( HmgInsertObjectHelper::Insert((HmgInsertObjectHelper *)&v28, (struct OBJECT *)Object, 0xFu, 8u) )
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
        v23 = v27;
        v24 = (v27 + 24) & -(__int64)(v27 != 0);
        v25 = *(_QWORD *)v24;
        if ( *(_QWORD *)(*(_QWORD *)v24 + 8LL) != v24 )
          __fastfail(3u);
        *(_QWORD *)v11 = v25;
        *((_QWORD *)v11 + 1) = v24;
        *(_QWORD *)(v25 + 8) = v11;
        *(_QWORD *)v24 = v11;
        if ( v23 )
          _InterlockedDecrement((volatile signed __int32 *)(v23 + 12));
      }
      else
      {
        v21 = (struct DwmState **)((char *)g_pDwmState + 80);
        v22 = *((_QWORD *)g_pDwmState + 10);
        if ( *(struct DwmState **)(v22 + 8) != (struct DwmState *)((char *)g_pDwmState + 80) )
          __fastfail(3u);
        *(_QWORD *)v11 = v22;
        *((_QWORD *)v11 + 1) = v21;
        *(_QWORD *)(v22 + 8) = v11;
        *v21 = v11;
      }
    }
    else
    {
      v15 = (struct DwmState **)*((_QWORD *)g_pDwmState + 11);
      if ( *v15 != (struct DwmState *)((char *)g_pDwmState + 80) )
        __fastfail(3u);
      *(_QWORD *)v11 = (char *)g_pDwmState + 80;
      *((_QWORD *)v11 + 1) = v15;
      *v15 = v11;
      *((_QWORD *)g_pDwmState + 11) = v11;
    }
    if ( a1 )
    {
      v16 = *(_QWORD *)v10;
      *((_QWORD *)v10 + 5) = a1;
      Buffer[0] = a1;
      Buffer[1] = v16;
      RtlInsertElementGenericTable((PRTL_GENERIC_TABLE)g_pDwmState, Buffer, 0x10u, NewElement);
    }
    if ( !NewElement[0] )
      goto LABEL_27;
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
      DWMSPRITE::SetLogicalSurface((DWMSPRITE *)v10, v18, v29);
      SFMLOGICALSURFACEREF_vDestructorWrap(&v29);
    }
    else
    {
      NewElement[0] = 0;
    }
  }
  if ( !NewElement[0] )
LABEL_27:
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
