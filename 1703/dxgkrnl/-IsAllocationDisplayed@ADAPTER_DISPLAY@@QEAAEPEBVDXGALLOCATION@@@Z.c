/*
 * XREFs of ?IsAllocationDisplayed@ADAPTER_DISPLAY@@QEAAEPEBVDXGALLOCATION@@@Z @ 0x1C0171CB8
 * Callers:
 *     ?IsDisplayedPrimary@DXGDEVICE@@QEAA_NIPEBVDXGALLOCATION@@@Z @ 0x1C002587C (-IsDisplayedPrimary@DXGDEVICE@@QEAA_NIPEBVDXGALLOCATION@@@Z.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0007228 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C00072E0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSMUTEX@@QEAA@XZ @ 0x1C0013624 (--1DXGPROCESSMUTEX@@QEAA@XZ.c)
 *     ?GetDisplayPlaneConfigHead@@YAPEAU_DISPLAY_PLANE_CONFIG@@PEAU_DISPLAY_PLANE_CONFIG_QUEUE@@PEAH@Z @ 0x1C00A62FC (-GetDisplayPlaneConfigHead@@YAPEAU_DISPLAY_PLANE_CONFIG@@PEAU_DISPLAY_PLANE_CONFIG_QUEUE@@PEAH@Z.c)
 */

char __fastcall ADAPTER_DISPLAY::IsAllocationDisplayed(
        ADAPTER_DISPLAY *this,
        const struct DXGALLOCATION *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v6; // rdx
  __int64 v7; // r8
  unsigned int v8; // edi
  __int64 v9; // r9
  __int64 v10; // rsi
  char v11; // bl
  unsigned int v12; // r10d
  __int64 v13; // rbp
  const struct DXGALLOCATION **DisplayPlaneConfigHead; // rax
  int v15; // r10d
  unsigned int v16; // r11d
  _BYTE v18[40]; // [rsp+20h] [rbp-28h] BYREF
  int v19; // [rsp+50h] [rbp+8h] BYREF

  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v18, (ADAPTER_DISPLAY *)((char *)this + 400), a3, a4);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v18);
  v8 = *((_DWORD *)this + 20);
  v9 = 0LL;
  if ( v8 )
  {
    v10 = *((_QWORD *)this + 14);
    v11 = 1;
    while ( 1 )
    {
      v12 = 0;
      v13 = 3208LL * (unsigned int)v9;
      if ( *(_DWORD *)(v10 + v13 + 3192) )
        break;
LABEL_7:
      v9 = (unsigned int)(v9 + 1);
      if ( (unsigned int)v9 >= v8 )
        goto LABEL_8;
    }
    while ( 1 )
    {
      DisplayPlaneConfigHead = (const struct DXGALLOCATION **)GetDisplayPlaneConfigHead(
                                                                (struct _DISPLAY_PLANE_CONFIG_QUEUE *)(v13 + v10 + 168LL * v12 + 1080),
                                                                &v19);
      if ( DisplayPlaneConfigHead )
      {
        if ( *DisplayPlaneConfigHead == a2 )
          break;
      }
      v12 = v15 + 1;
      if ( v12 >= v16 )
        goto LABEL_7;
    }
  }
  else
  {
LABEL_8:
    v11 = 0;
  }
  DXGPROCESSMUTEX::~DXGPROCESSMUTEX((DXGPROCESSMUTEX *)v18, v6, v7, v9);
  return v11;
}
