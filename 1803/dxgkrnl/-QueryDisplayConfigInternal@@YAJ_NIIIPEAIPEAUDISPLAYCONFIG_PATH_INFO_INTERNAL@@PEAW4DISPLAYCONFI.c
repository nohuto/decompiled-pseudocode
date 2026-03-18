/*
 * XREFs of ?QueryDisplayConfigInternal@@YAJ_NIIIPEAIPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAW4DISPLAYCONFIG_TOPOLOGY_ID@@@Z @ 0x1C00C49F8
 * Callers:
 *     DxgkQueryDisplayConfig @ 0x1C00C3860 (DxgkQueryDisplayConfig.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00150F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?AddToCache@QDC_CACHE@@QEAAJIIIIPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAW4DISPLAYCONFIG_TOPOLOGY_ID@@@Z @ 0x1C00C3A94 (-AddToCache@QDC_CACHE@@QEAAJIIIIPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAW4DISPLAYCONFIG_TOPOLOG.c)
 *     ?LogDiagQDC@@YAIIQEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@IIJPEAW4DISPLAYCONFIG_TOPOLOGY_ID@@_K@Z @ 0x1C00C479C (-LogDiagQDC@@YAIIQEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@IIJPEAW4DISPLAYCONFIG_TOPOLOGY_ID@@_K@Z.c)
 *     ?GetRequestedPathsModality@@YAJIHPEAU_QDC_CONTEXT@@PEAW4DISPLAYCONFIG_TOPOLOGY_ID@@@Z @ 0x1C00C4BD8 (-GetRequestedPathsModality@@YAJIHPEAU_QDC_CONTEXT@@PEAW4DISPLAYCONFIG_TOPOLOGY_ID@@@Z.c)
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
  enum DISPLAYCONFIG_TOPOLOGY_ID *v7; // rsi
  __int64 v8; // rdi
  ULONG TimeIncrement; // eax
  __int64 v10; // rdx
  __int64 v11; // r8
  enum DISPLAYCONFIG_TOPOLOGY_ID *v12; // r15
  const struct DISPLAYCONFIG_PATH_INFO_INTERNAL *v13; // r12
  __int64 v14; // rcx
  unsigned int *v15; // r14
  __int64 v16; // r13
  int v17; // eax
  unsigned __int64 v18; // r13
  int v19; // edx
  int v20; // r10d
  int v21; // ecx
  unsigned int v22; // ecx
  signed int RequestedPathsModality; // ebx
  __int64 v24; // rcx
  unsigned int v25; // esi
  struct DXGGLOBAL *Global; // rax
  int v27; // eax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // rdi
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // [rsp+40h] [rbp-20h]
  __int64 v37; // [rsp+48h] [rbp-18h] BYREF
  struct DISPLAYCONFIG_PATH_INFO_INTERNAL *v38; // [rsp+50h] [rbp-10h]
  struct DISPLAYCONFIG_PATH_INFO_INTERNAL *v39; // [rsp+58h] [rbp-8h]
  int v40; // [rsp+A0h] [rbp+40h] BYREF
  unsigned int v41; // [rsp+A8h] [rbp+48h]
  unsigned int v42; // [rsp+B8h] [rbp+58h]

  v42 = a4;
  v41 = a2;
  v40 = -1;
  v37 = 0LL;
  v7 = 0LL;
  v38 = 0LL;
  v39 = 0LL;
  v8 = a3;
  v36 = MEMORY[0xFFFFF78000000320];
  TimeIncrement = KeQueryTimeIncrement();
  v12 = a7;
  v13 = a6;
  v14 = v8 & 7;
  v15 = a5;
  v16 = TimeIncrement;
  v17 = 0;
  v18 = v36 * v16;
  if ( (int)v8 < 0 )
  {
    if ( (_DWORD)v14 != 2 )
    {
      v33 = WdLogNewEntry5_WdWarning(v14, v10, v11);
      *(_QWORD *)(v33 + 24) = v8;
      WdLogEvent5_WdWarning(v33);
      RequestedPathsModality = -1073741811;
      goto LABEL_16;
    }
    v17 = 0x80000;
    v19 = 2621440;
  }
  else
  {
    v19 = 0x200000;
  }
  v38 = a6;
  v39 = a6;
  if ( (v8 & 0x40000000) == 0 )
    v19 = v17;
  v20 = v19 | 0x800000;
  if ( (v8 & 0x20000000) == 0 )
    v20 = v19;
  HIDWORD(v37) = *a5;
  LOBYTE(v37) = 1;
  switch ( (_DWORD)v14 )
  {
    case 1:
      v22 = v20 | 0x10;
LABEL_12:
      RequestedPathsModality = GetRequestedPathsModality(
                                 v22,
                                 0,
                                 (struct _QDC_CONTEXT *)&v37,
                                 (enum DISPLAYCONFIG_TOPOLOGY_ID *)&v40);
      break;
    case 2:
      v21 = v20 | 0x1000000;
      if ( (v8 & 0x20) == 0 )
        v21 = v20;
      v22 = v21 | 0x40;
      goto LABEL_12;
    case 4:
      RequestedPathsModality = GetRequestedPathsModality(
                                 v20 | 0x400000F,
                                 1,
                                 (struct _QDC_CONTEXT *)&v37,
                                 (enum DISPLAYCONFIG_TOPOLOGY_ID *)&v40);
      v7 = (enum DISPLAYCONFIG_TOPOLOGY_ID *)&v40;
      break;
    default:
      RequestedPathsModality = -1073741811;
      v34 = WdLogNewEntry5_WdWarning(v14, 1LL, v11);
      *(_QWORD *)(v34 + 24) = v8;
      WdLogEvent5_WdWarning(v34);
      break;
  }
  if ( RequestedPathsModality >= 0 )
  {
    *v15 = (v39 - v38) / 200;
    if ( v12 )
      *(_DWORD *)v12 = v40;
  }
LABEL_16:
  v25 = LogDiagQDC(*v15, v13, v8, v42, RequestedPathsModality, v7, v18);
  if ( RequestedPathsModality >= 0 )
  {
    Global = DXGGLOBAL::GetGlobal(v24);
    v27 = QDC_CACHE::AddToCache(*((struct DXGFASTMUTEX ***)Global + 127), v41, v25, (unsigned int)v8, *v15, v13, v12);
    v31 = v27;
    if ( v27 )
    {
      v35 = WdLogNewEntry5_WdWarning(v29, v28, v30);
      *(_QWORD *)(v35 + 24) = v31;
      WdLogEvent5_WdWarning(v35);
    }
  }
  return (unsigned int)RequestedPathsModality;
}
