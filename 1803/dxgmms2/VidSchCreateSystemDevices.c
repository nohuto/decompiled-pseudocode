/*
 * XREFs of VidSchCreateSystemDevices @ 0x1C007F53C
 * Callers:
 *     ?VidMmInitializePagingProcess@VIDMM_GLOBAL@@QEAAJXZ @ 0x1C007E714 (-VidMmInitializePagingProcess@VIDMM_GLOBAL@@QEAAJXZ.c)
 * Callees:
 *     VidSchiSchedulerNodeToDriverEngine @ 0x1C0002EB0 (VidSchiSchedulerNodeToDriverEngine.c)
 *     VidSchiCreateContextInternal @ 0x1C00117A8 (VidSchiCreateContextInternal.c)
 *     ?VidSchiCreateHwContextInternal@@YAPEAUVIDSCH_HW_CONTEXT@@PEAU_VIDSCH_DEVICE@@PEAU_VIDSCH_CONTEXT_DATA@@PEAVDXGCONTEXT@@@Z @ 0x1C0030470 (-VidSchiCreateHwContextInternal@@YAPEAUVIDSCH_HW_CONTEXT@@PEAU_VIDSCH_DEVICE@@PEAU_VIDSCH_CONTEX.c)
 *     VidSchiCreateDeviceInternal @ 0x1C0057A8C (VidSchiCreateDeviceInternal.c)
 */

__int64 __fastcall VidSchCreateSystemDevices(__int64 a1)
{
  __int64 *v1; // r14
  __int64 v3; // rdx
  __int64 v4; // rcx
  int DeviceInternal; // edi
  struct _VIDSCH_DEVICE **v6; // r15
  __int64 v7; // rcx
  __int64 ContextInternal; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 i; // rdi
  char v12; // si
  int v13; // eax
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rdi
  __int64 v19; // r14
  __int64 v20; // r9
  __int64 v21; // rcx
  int v22; // edx
  bool v23; // dl
  struct _VIDSCH_DEVICE *v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v28; // rax
  _QWORD *v29; // rax
  __int64 v30; // rcx
  __int64 v31; // rdx
  _QWORD *v32; // rax
  struct VIDSCH_HW_CONTEXT *HwContextInternal; // rax
  __int64 v34; // rdx
  __int64 v35; // rcx
  int v36; // eax
  __int64 v37; // rcx
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // [rsp+20h] [rbp-20h] BYREF
  __int64 v41; // [rsp+28h] [rbp-18h]
  __int64 v42; // [rsp+30h] [rbp-10h]
  int v43; // [rsp+38h] [rbp-8h]

  v1 = (__int64 *)(a1 + 216);
  v40 = 1LL;
  v41 = 0LL;
  v42 = 0LL;
  DeviceInternal = VidSchiCreateDeviceInternal(a1, (__int64)&v40, 0LL, (char **)(a1 + 216));
  if ( DeviceInternal < 0
    || (v6 = (struct _VIDSCH_DEVICE **)(a1 + 232),
        v40 = 17LL,
        v41 = 0LL,
        v42 = 0LL,
        DeviceInternal = VidSchiCreateDeviceInternal(a1, (__int64)&v40, 0LL, (char **)(a1 + 232)),
        DeviceInternal < 0) )
  {
    v28 = WdLogNewEntry5_WdAssertion(v4, v3);
    *(_QWORD *)(v28 + 24) = *(_QWORD *)(a1 + 16);
    WdLogEvent5_WdAssertion(v28);
    return (unsigned int)DeviceInternal;
  }
  v7 = *v1;
  v41 = 0x700000000LL;
  v42 = 0LL;
  v40 = 268LL;
  v43 = *(_DWORD *)(a1 + 40) * *(_DWORD *)(a1 + 132);
  ContextInternal = VidSchiCreateContextInternal(v7, (int *)&v40, 0LL);
  *(_QWORD *)(a1 + 224) = ContextInternal;
  if ( !ContextInternal )
  {
    v29 = (_QWORD *)WdLogNewEntry5_WdAssertion(v10, v9);
    v29[3] = *(_QWORD *)(a1 + 16);
    v29[4] = 963LL;
    goto LABEL_28;
  }
  for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 64); *(_QWORD *)(a1 + 424) |= 1LL << v12 )
  {
    v12 = i;
    if ( (*(_DWORD *)(*(_QWORD *)(a1 + 8 * i + 440) + 12LL) & 2) == 0 )
    {
      v41 = 0x700000000LL;
      v42 = 0LL;
      v43 = 0;
      LODWORD(v40) = 20;
      HIDWORD(v40) = i;
      v13 = VidSchiSchedulerNodeToDriverEngine(a1, i);
      v14 = *v1;
      LODWORD(v41) = v13;
      v15 = VidSchiCreateContextInternal(v14, (int *)&v40, 0LL);
      v17 = *(_QWORD *)(a1 + 8 * i + 440);
      *(_QWORD *)(v17 + 32) = v15;
      if ( !*(_QWORD *)(*(_QWORD *)(a1 + 8 * i + 440) + 32LL) )
      {
        v29 = (_QWORD *)WdLogNewEntry5_WdAssertion(v17, v16);
        v29[3] = (unsigned int)i;
        v30 = *(_QWORD *)(a1 + 16);
        v29[5] = 998LL;
        goto LABEL_27;
      }
    }
    i = (unsigned int)(i + 1);
  }
  v18 = 0LL;
  if ( !*(_DWORD *)(a1 + 60) )
    return 0LL;
  while ( 1 )
  {
    v19 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 2360LL) + 352LL * (unsigned int)v18;
    v20 = *(unsigned __int8 *)(a1 + v18 + 68) + (unsigned int)*(unsigned __int16 *)(v19 + 2);
    v40 = 0LL;
    v41 = 0LL;
    v42 = 0LL;
    v21 = *(_QWORD *)(a1 + 8 * v20 + 440);
    v43 = 0;
    HIDWORD(v41) = 7;
    LODWORD(v40) = 29;
    v22 = *(_DWORD *)(v21 + 12) >> 1;
    if ( (_DWORD)v18 )
    {
      LOBYTE(v21) = *(_BYTE *)(a1 + 54);
      v31 = v22 & 1;
      if ( (_BYTE)v31 != (_BYTE)v21 )
      {
        v32 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v21, v31, 29LL);
        v32[5] = 0LL;
        v32[6] = 0LL;
        v32[7] = 0LL;
        v32[3] = 281LL;
        v32[4] = 20480LL;
        WdLogEvent5_WdCriticalError(v32);
        JUMPOUT(0x1C009D380LL);
      }
    }
    else
    {
      v23 = (*(_DWORD *)(v21 + 12) & 2) != 0;
      *(_BYTE *)(a1 + 54) = v23;
      LOBYTE(v21) = v23;
    }
    v24 = *v6;
    HIDWORD(v40) = v20;
    LODWORD(v41) = v18;
    if ( (_BYTE)v21 )
    {
      LODWORD(v40) = 2077;
      HwContextInternal = VidSchiCreateHwContextInternal(v24, (struct _VIDSCH_CONTEXT_DATA *)&v40, 0LL);
      v35 = *(_QWORD *)(a1 + 248);
      *(_QWORD *)(v35 + 8 * v18) = HwContextInternal;
      if ( !*(_QWORD *)(*(_QWORD *)(a1 + 248) + 8 * v18) )
      {
        v29 = (_QWORD *)WdLogNewEntry5_WdAssertion(v35, v34);
        v29[3] = (unsigned int)v18;
        v30 = *(_QWORD *)(a1 + 16);
        v29[5] = 1059LL;
        goto LABEL_27;
      }
      goto LABEL_14;
    }
    *(_QWORD *)(*(_QWORD *)(a1 + 240) + 8 * v18) = VidSchiCreateContextInternal((__int64)v24, (int *)&v40, 0LL);
    v26 = *(_QWORD *)(*(_QWORD *)(a1 + 240) + 8 * v18);
    if ( !v26 )
      break;
    *(_BYTE *)(v26 + 633) = 1;
    if ( (*(_BYTE *)(v19 + 16) & 0xC) == 0xC )
    {
      v36 = *(_DWORD *)(v19 + 20) + *(unsigned __int8 *)(a1 + v18 + 68);
      v37 = (__int64)*v6;
      LODWORD(v40) = v40 | 0x200;
      HIDWORD(v40) = v36;
      *(_QWORD *)(*(_QWORD *)(a1 + 264) + 8 * v18) = VidSchiCreateContextInternal(v37, (int *)&v40, 0LL);
      v39 = *(_QWORD *)(*(_QWORD *)(a1 + 264) + 8 * v18);
      if ( !v39 )
      {
        v29 = (_QWORD *)WdLogNewEntry5_WdAssertion(0LL, v38);
        v29[3] = (unsigned int)v18;
        v30 = *(_QWORD *)(a1 + 16);
        v29[5] = 1096LL;
        goto LABEL_27;
      }
      *(_BYTE *)(v39 + 633) = 1;
    }
LABEL_14:
    v18 = (unsigned int)(v18 + 1);
    if ( (unsigned int)v18 >= *(_DWORD *)(a1 + 60) )
      return 0LL;
  }
  v29 = (_QWORD *)WdLogNewEntry5_WdAssertion(0LL, v25);
  v29[3] = (unsigned int)v18;
  v30 = *(_QWORD *)(a1 + 16);
  v29[5] = 1075LL;
LABEL_27:
  v29[4] = v30;
LABEL_28:
  WdLogEvent5_WdAssertion(v29);
  return (unsigned int)-1073741823;
}
