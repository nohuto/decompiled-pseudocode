/*
 * XREFs of ?ReplaceDisplayedAllocation@ADAPTER_DISPLAY@@QEAAXPEBVDXGALLOCATION@@0@Z @ 0x1C00E6630
 * Callers:
 *     ?TestAndSetDisplayedPrimary@DXGDEVICE@@QEAAXIPEBVDXGALLOCATION@@PEAV2@@Z @ 0x1C0005180 (-TestAndSetDisplayedPrimary@DXGDEVICE@@QEAAXIPEBVDXGALLOCATION@@PEAV2@@Z.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0007228 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007270 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C00072E0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?GetDisplayPlaneConfigHead@@YAPEAU_DISPLAY_PLANE_CONFIG@@PEAU_DISPLAY_PLANE_CONFIG_QUEUE@@PEAH@Z @ 0x1C00A62FC (-GetDisplayPlaneConfigHead@@YAPEAU_DISPLAY_PLANE_CONFIG@@PEAU_DISPLAY_PLANE_CONFIG_QUEUE@@PEAH@Z.c)
 *     ?GetPreviousConfigIndex@@YAHH@Z @ 0x1C0171A90 (-GetPreviousConfigIndex@@YAHH@Z.c)
 */

void __fastcall ADAPTER_DISPLAY::ReplaceDisplayedAllocation(
        ADAPTER_DISPLAY *this,
        const struct DXGALLOCATION *a2,
        const struct DXGALLOCATION *a3,
        __int64 a4)
{
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // r10
  unsigned int i; // r14d
  __int64 v11; // rdx
  unsigned int v12; // ebp
  __int64 v13; // rdi
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // r12
  struct _DISPLAY_PLANE_CONFIG *DisplayPlaneConfigHead; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  int PreviousConfigIndex; // r15d
  __int64 v21; // rsi
  __int64 v22; // rax
  __int64 v23; // rax
  _BYTE v24[56]; // [rsp+20h] [rbp-38h] BYREF
  const struct DXGALLOCATION *v25; // [rsp+70h] [rbp+18h] BYREF

  v25 = a3;
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v24, (ADAPTER_DISPLAY *)((char *)this + 400), (__int64)a3, a4);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v24);
  v9 = 0LL;
  for ( i = 0; i < *((_DWORD *)this + 20); ++i )
  {
    v11 = *((_QWORD *)this + 14);
    v12 = v9;
    v13 = 3208LL * i;
    if ( *(_DWORD *)(v11 + v13 + 3192) > (unsigned int)v9 )
    {
      do
      {
        LODWORD(v25) = v9;
        v16 = v13 + 168LL * v12;
        DisplayPlaneConfigHead = GetDisplayPlaneConfigHead(
                                   (struct _DISPLAY_PLANE_CONFIG_QUEUE *)(v16 + v11 + 1080),
                                   (int *)&v25);
        if ( DisplayPlaneConfigHead )
        {
          PreviousConfigIndex = (int)v25;
          while ( *(const struct DXGALLOCATION **)DisplayPlaneConfigHead != a2 )
          {
            v21 = v16 + *((_QWORD *)this + 14);
            if ( *(_DWORD *)(v21 + 1080) == -1 )
            {
              v22 = WdLogNewEntry5_WdAssertion(v19, v18, v7, v8);
              *(_QWORD *)(v22 + 24) = 7452LL;
              WdLogEvent5_WdAssertion(v22);
            }
            if ( *(_DWORD *)(v21 + 1084) == -1 )
            {
              v23 = WdLogNewEntry5_WdAssertion(v19, v18, v7, v8);
              *(_QWORD *)(v23 + 24) = 7453LL;
              WdLogEvent5_WdAssertion(v23);
            }
            if ( PreviousConfigIndex == *(_DWORD *)(v21 + 1084) )
            {
              v9 = 0LL;
              goto LABEL_17;
            }
            PreviousConfigIndex = GetPreviousConfigIndex(PreviousConfigIndex);
            v9 = 0LL;
            v19 = 80LL * PreviousConfigIndex;
            DisplayPlaneConfigHead = (struct _DISPLAY_PLANE_CONFIG *)(v19 + v21 + 1088);
            if ( !DisplayPlaneConfigHead )
              goto LABEL_17;
          }
          *(_QWORD *)DisplayPlaneConfigHead = v9;
          *((_BYTE *)DisplayPlaneConfigHead + 12) = v9;
        }
LABEL_17:
        v11 = *((_QWORD *)this + 14);
        ++v12;
      }
      while ( v12 < *(_DWORD *)(v11 + v13 + 3192) );
    }
    v14 = *((_QWORD *)this + 14);
    v6 = (unsigned int)v9;
    v15 = v14 + v13;
    if ( *(_DWORD *)(v14 + v13 + 3196) > (unsigned int)v9 )
    {
      do
      {
        v7 = (unsigned int)v6;
        if ( *(_BYTE *)((unsigned int)v6 + v15 + 2504) != (_BYTE)v9 )
        {
          v8 = v13 + 80LL * (unsigned int)v6;
          if ( *(_BYTE *)(v8 + v14 + 2524) != (_BYTE)v9 && *(const struct DXGALLOCATION **)(v8 + v14 + 2512) == a2 )
          {
            *(_QWORD *)(v8 + v14 + 2512) = v9;
            *(_BYTE *)((unsigned int)v6 + *((_QWORD *)this + 14) + v13 + 2504) = v9;
            *(_BYTE *)(*((_QWORD *)this + 14) + v8 + 2524) = v9;
          }
        }
        v14 = *((_QWORD *)this + 14);
        v6 = (unsigned int)(v6 + 1);
        v15 = v14 + v13;
      }
      while ( (unsigned int)v6 < *(_DWORD *)(v14 + v13 + 3196) );
    }
  }
  if ( v24[8] != (_BYTE)v9 )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v24, v6, v7, v8);
}
