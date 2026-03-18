/*
 * XREFs of ?QueryDisplayConfigInternal@@YAJ_NIIPEAIPEAUDISPLAYCONFIG_PATH_INFO@@1PEAUDISPLAYCONFIG_MODE_INFO@@PEAW4DISPLAYCONFIG_TOPOLOGY_ID@@@Z @ 0x1C00A954C
 * Callers:
 *     DxgkQueryDisplayConfig @ 0x1C00F0C20 (DxgkQueryDisplayConfig.c)
 * Callees:
 *     memset @ 0x1C0015700 (memset.c)
 *     ?LogDiagQDC@@YAIIQEBUDISPLAYCONFIG_PATH_INFO@@IQEBUDISPLAYCONFIG_MODE_INFO@@IJPEAW4DISPLAYCONFIG_TOPOLOGY_ID@@_K@Z @ 0x1C00A97C4 (-LogDiagQDC@@YAIIQEBUDISPLAYCONFIG_PATH_INFO@@IQEBUDISPLAYCONFIG_MODE_INFO@@IJPEAW4DISPLAYCONFIG.c)
 *     ?GetRequestedPathsModality@@YAJIHHHPEAU_QDC_CONTEXT@@PEAW4DISPLAYCONFIG_TOPOLOGY_ID@@@Z @ 0x1C00A9978 (-GetRequestedPathsModality@@YAJIHHHPEAU_QDC_CONTEXT@@PEAW4DISPLAYCONFIG_TOPOLOGY_ID@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00CCEF0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?AddToCache@QDC_CACHE@@QEAAJIIIIPEAUDISPLAYCONFIG_PATH_INFO@@IPEAUDISPLAYCONFIG_MODE_INFO@@PEAW4DISPLAYCONFIG_TOPOLOGY_ID@@@Z @ 0x1C00F0E98 (-AddToCache@QDC_CACHE@@QEAAJIIIIPEAUDISPLAYCONFIG_PATH_INFO@@IPEAUDISPLAYCONFIG_MODE_INFO@@PEAW4.c)
 */

__int64 __fastcall QueryDisplayConfigInternal(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int *a4,
        struct DISPLAYCONFIG_PATH_INFO *a5,
        unsigned int *a6,
        struct DISPLAYCONFIG_MODE_INFO *a7,
        enum DISPLAYCONFIG_TOPOLOGY_ID *a8)
{
  __int64 v8; // rdi
  ULONG TimeIncrement; // eax
  const struct DISPLAYCONFIG_PATH_INFO *Src; // r13
  unsigned int *v12; // r14
  const struct DISPLAYCONFIG_MODE_INFO *v13; // r12
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  enum DISPLAYCONFIG_TOPOLOGY_ID *v17; // r15
  unsigned int v18; // edx
  __int64 v19; // rcx
  int v20; // r10d
  __int64 v21; // r8
  __int64 v22; // r9
  int v23; // eax
  int v24; // ecx
  unsigned int v25; // ecx
  int RequestedPathsModality; // ebx
  __int64 v27; // rax
  unsigned int v28; // r12d
  struct DXGGLOBAL *Global; // rax
  int v30; // eax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v35; // rdi
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // rax
  unsigned __int64 v40; // [rsp+58h] [rbp-39h]
  unsigned __int64 v41; // [rsp+58h] [rbp-39h]
  _QWORD v42[13]; // [rsp+60h] [rbp-31h] BYREF
  int v43; // [rsp+D8h] [rbp+47h] BYREF
  unsigned int v44; // [rsp+E0h] [rbp+4Fh]
  enum DISPLAYCONFIG_TOPOLOGY_ID *v45; // [rsp+F0h] [rbp+5Fh]

  v44 = a2;
  v43 = -1;
  v45 = 0LL;
  v8 = a3;
  memset(v42, 0, 0x30uLL);
  v40 = MEMORY[0xFFFFF78000000320];
  TimeIncrement = KeQueryTimeIncrement();
  Src = a5;
  v41 = v40 * TimeIncrement;
  memset(a5, 0, 72LL * *a4);
  v12 = a6;
  v13 = a7;
  memset(a7, 0, (unsigned __int64)*a6 << 6);
  v17 = a8;
  v18 = 0;
  if ( (int)v8 < 0 )
  {
    if ( (v8 & 7) != 2 )
    {
      v37 = WdLogNewEntry5_WdWarning(v14, 0LL, v15, v16);
      *(_QWORD *)(v37 + 24) = v8;
      WdLogEvent5_WdWarning(v37);
      RequestedPathsModality = -1073741811;
      goto LABEL_15;
    }
    v18 = 0x80000;
  }
  v19 = v18;
  v42[1] = Src;
  LODWORD(v19) = v18 | 0x200000;
  v42[3] = v13;
  v42[4] = Src;
  v42[5] = v13;
  if ( (v8 & 0x40000000) == 0 )
    v19 = v18;
  LOBYTE(v42[0]) = 1;
  v20 = v19 | 0x800000;
  v21 = 0LL;
  if ( (v8 & 0x20000000) == 0 )
    v20 = v19;
  HIDWORD(v42[0]) = *a4;
  LODWORD(v42[2]) = *v12;
  LOBYTE(v21) = (v8 & 0x18) != 0;
  v22 = ((unsigned int)v8 >> 3) & 1;
  v23 = v8 & 7;
  switch ( v23 )
  {
    case 1:
      v25 = v20 | 0x10;
LABEL_11:
      RequestedPathsModality = GetRequestedPathsModality(
                                 v25,
                                 0,
                                 v21,
                                 v22,
                                 (struct _QDC_CONTEXT *)v42,
                                 (enum DISPLAYCONFIG_TOPOLOGY_ID *)&v43);
      break;
    case 2:
      v24 = v20 | 0x1000000;
      if ( (v8 & 0x20) == 0 )
        v24 = v20;
      v25 = v24 | 0x40;
      goto LABEL_11;
    case 4:
      RequestedPathsModality = GetRequestedPathsModality(
                                 v20 | 0x400000Fu,
                                 1,
                                 v21,
                                 v22,
                                 (struct _QDC_CONTEXT *)v42,
                                 (enum DISPLAYCONFIG_TOPOLOGY_ID *)&v43);
      v45 = (enum DISPLAYCONFIG_TOPOLOGY_ID *)&v43;
      break;
    default:
      RequestedPathsModality = -1073741811;
      v38 = WdLogNewEntry5_WdWarning(v19, 1LL, v21, v22);
      *(_QWORD *)(v38 + 24) = v8;
      WdLogEvent5_WdWarning(v38);
      break;
  }
  if ( RequestedPathsModality >= 0 )
  {
    v27 = (__int64)(v42[5] - v42[3]) >> 6;
    *a4 = (v42[4] - v42[1]) / 72LL;
    *v12 = v27;
    if ( v17 )
      *(_DWORD *)v17 = v43;
  }
LABEL_15:
  v28 = LogDiagQDC(*a4, Src, *v12, v13, v8, RequestedPathsModality, v45, v41);
  if ( RequestedPathsModality >= 0 )
  {
    Global = DXGGLOBAL::GetGlobal();
    v30 = QDC_CACHE::AddToCache(*((QDC_CACHE **)Global + 117), v44, v28, v8, *a4, Src, *v12, a7, v17);
    v35 = v30;
    if ( v30 )
    {
      v39 = WdLogNewEntry5_WdWarning(v32, v31, v33, v34);
      *(_QWORD *)(v39 + 24) = v35;
      WdLogEvent5_WdWarning(v39);
    }
  }
  return (unsigned int)RequestedPathsModality;
}
