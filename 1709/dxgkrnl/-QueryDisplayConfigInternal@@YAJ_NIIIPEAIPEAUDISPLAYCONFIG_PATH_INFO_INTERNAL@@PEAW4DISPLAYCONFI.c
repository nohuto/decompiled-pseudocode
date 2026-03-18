/*
 * XREFs of ?QueryDisplayConfigInternal@@YAJ_NIIIPEAIPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAW4DISPLAYCONFIG_TOPOLOGY_ID@@@Z @ 0x1C00E0F88
 * Callers:
 *     DxgkQueryDisplayConfig @ 0x1C00D2A70 (DxgkQueryDisplayConfig.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0002A50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?LogDiagQDC@@YAIIQEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@IIJPEAW4DISPLAYCONFIG_TOPOLOGY_ID@@_K@Z @ 0x1C00D0F78 (-LogDiagQDC@@YAIIQEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@IIJPEAW4DISPLAYCONFIG_TOPOLOGY_ID@@_K@Z.c)
 *     ?AddToCache@QDC_CACHE@@QEAAJIIIIPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAW4DISPLAYCONFIG_TOPOLOGY_ID@@@Z @ 0x1C00D2C20 (-AddToCache@QDC_CACHE@@QEAAJIIIIPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAW4DISPLAYCONFIG_TOPOLOG.c)
 *     ?GetRequestedPathsModality@@YAJIHPEAU_QDC_CONTEXT@@PEAW4DISPLAYCONFIG_TOPOLOGY_ID@@@Z @ 0x1C00E0E70 (-GetRequestedPathsModality@@YAJIHPEAU_QDC_CONTEXT@@PEAW4DISPLAYCONFIG_TOPOLOGY_ID@@@Z.c)
 */

__int64 __fastcall QueryDisplayConfigInternal(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int *a5,
        struct DISPLAYCONFIG_PATH_INFO_INTERNAL *a6,
        enum DISPLAYCONFIG_TOPOLOGY_ID *a7)
{
  enum DISPLAYCONFIG_TOPOLOGY_ID *v7; // r13
  __int64 v8; // rdi
  ULONG TimeIncrement; // eax
  __int64 v10; // rcx
  __int64 v11; // r8
  enum DISPLAYCONFIG_TOPOLOGY_ID *v12; // r14
  unsigned int v13; // edx
  const struct DISPLAYCONFIG_PATH_INFO_INTERNAL *v14; // r12
  unsigned int *v15; // rsi
  unsigned __int64 v16; // r15
  __int64 v17; // rcx
  int v18; // r10d
  int v19; // eax
  int v20; // ecx
  __int64 v21; // rcx
  signed int RequestedPathsModality; // ebx
  __int64 v23; // rcx
  int v24; // r15d
  struct DXGGLOBAL *Global; // rax
  int v26; // eax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // rdi
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // [rsp+40h] [rbp-20h]
  __int64 v36; // [rsp+48h] [rbp-18h] BYREF
  struct DISPLAYCONFIG_PATH_INFO_INTERNAL *v37; // [rsp+50h] [rbp-10h]
  struct DISPLAYCONFIG_PATH_INFO_INTERNAL *v38; // [rsp+58h] [rbp-8h]
  int v39; // [rsp+A0h] [rbp+40h] BYREF
  unsigned int v40; // [rsp+A8h] [rbp+48h]
  unsigned int v41; // [rsp+B8h] [rbp+58h]

  v41 = a4;
  v40 = a2;
  v39 = -1;
  v36 = 0LL;
  v7 = 0LL;
  v37 = 0LL;
  v38 = 0LL;
  v8 = a3;
  v35 = MEMORY[0xFFFFF78000000320];
  TimeIncrement = KeQueryTimeIncrement();
  v12 = a7;
  v13 = 0;
  v14 = a6;
  v15 = a5;
  v16 = v35 * TimeIncrement;
  if ( (int)v8 < 0 )
  {
    if ( (v8 & 7) != 2 )
    {
      v32 = WdLogNewEntry5_WdWarning(v10, 0LL, v11);
      *(_QWORD *)(v32 + 24) = v8;
      WdLogEvent5_WdWarning(v32);
      RequestedPathsModality = -1073741811;
      goto LABEL_15;
    }
    v13 = 0x80000;
  }
  v17 = v13;
  v37 = a6;
  LODWORD(v17) = v13 | 0x200000;
  v38 = a6;
  if ( (v8 & 0x40000000) == 0 )
    v17 = v13;
  LOBYTE(v36) = 1;
  v18 = v17 | 0x800000;
  HIDWORD(v36) = *a5;
  if ( (v8 & 0x20000000) == 0 )
    v18 = v17;
  v19 = v8 & 7;
  switch ( v19 )
  {
    case 1:
      v21 = v18 | 0x10u;
LABEL_11:
      RequestedPathsModality = GetRequestedPathsModality(
                                 v21,
                                 0LL,
                                 (struct _QDC_CONTEXT *)&v36,
                                 (enum DISPLAYCONFIG_TOPOLOGY_ID *)&v39);
      break;
    case 2:
      v20 = v18 | 0x1000000;
      if ( (v8 & 0x20) == 0 )
        v20 = v18;
      v21 = v20 | 0x40u;
      goto LABEL_11;
    case 4:
      RequestedPathsModality = GetRequestedPathsModality(
                                 v18 | 0x400000Fu,
                                 1LL,
                                 (struct _QDC_CONTEXT *)&v36,
                                 (enum DISPLAYCONFIG_TOPOLOGY_ID *)&v39);
      v7 = (enum DISPLAYCONFIG_TOPOLOGY_ID *)&v39;
      break;
    default:
      RequestedPathsModality = -1073741811;
      v33 = WdLogNewEntry5_WdWarning(v17, 1LL, v11);
      *(_QWORD *)(v33 + 24) = v8;
      WdLogEvent5_WdWarning(v33);
      break;
  }
  if ( RequestedPathsModality >= 0 )
  {
    *v15 = (v38 - v37) / 192;
    if ( v12 )
      *(_DWORD *)v12 = v39;
  }
LABEL_15:
  v24 = LogDiagQDC(*v15, v14, v8, v41, RequestedPathsModality, v7, v16);
  if ( RequestedPathsModality >= 0 )
  {
    Global = DXGGLOBAL::GetGlobal(v23);
    v26 = QDC_CACHE::AddToCache(*((struct DXGFASTMUTEX ***)Global + 117), v40, v24, v8, *v15, v14, v12);
    v30 = v26;
    if ( v26 )
    {
      v34 = WdLogNewEntry5_WdWarning(v28, v27, v29);
      *(_QWORD *)(v34 + 24) = v30;
      WdLogEvent5_WdWarning(v34);
    }
  }
  return (unsigned int)RequestedPathsModality;
}
