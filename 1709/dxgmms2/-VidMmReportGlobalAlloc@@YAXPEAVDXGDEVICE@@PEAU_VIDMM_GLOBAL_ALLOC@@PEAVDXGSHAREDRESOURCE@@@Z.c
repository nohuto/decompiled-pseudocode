/*
 * XREFs of ?VidMmReportGlobalAlloc@@YAXPEAVDXGDEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAVDXGSHAREDRESOURCE@@@Z @ 0x1C00A3250
 * Callers:
 *     VidMmReportContextAllocList @ 0x1C00A3750 (VidMmReportContextAllocList.c)
 *     VidMmReportMultiGlobalAlloc @ 0x1C00A3980 (VidMmReportMultiGlobalAlloc.c)
 * Callees:
 *     McTemplateK0pppqxqqqqqqqpppqqqqqqqqqqtpht @ 0x1C001696C (McTemplateK0pppqxqqqqqqqpppqqqqqqqqqqtpht.c)
 *     McTemplateK0pcc @ 0x1C0021698 (McTemplateK0pcc.c)
 */

void __fastcall VidMmReportGlobalAlloc(
        struct DXGDEVICE *a1,
        struct _VIDMM_GLOBAL_ALLOC *a2,
        struct DXGSHAREDRESOURCE *a3)
{
  int v3; // r13d
  char v4; // r11
  __int64 v7; // r9
  int *v8; // rdx
  __int64 v9; // rcx
  int v10; // edi
  int v11; // esi
  int v12; // ebp
  int v13; // r14d
  int v14; // r15d
  int v15; // r12d
  char v16; // al
  __int64 v17; // rcx
  __int64 v18; // [rsp+20h] [rbp-158h]
  __int64 v19; // [rsp+28h] [rbp-150h]
  int v20; // [rsp+48h] [rbp-130h]
  int v21; // [rsp+60h] [rbp-118h]
  int v22; // [rsp+100h] [rbp-78h]
  int v23; // [rsp+104h] [rbp-74h]
  int v24; // [rsp+108h] [rbp-70h]
  int v25; // [rsp+198h] [rbp+20h]

  LOBYTE(v3) = 0;
  v4 = (char)a3;
  v25 = **((_DWORD **)a2 + 63);
  if ( bTracingEnabled )
  {
    v7 = *((_QWORD *)a2 + 5);
    if ( v7 )
      v8 = *(int **)(v7 + 24);
    else
      v8 = 0LL;
    v9 = *((_QWORD *)a2 + 13);
    if ( v9 )
      a3 = *(struct DXGSHAREDRESOURCE **)(*(_QWORD *)(v9 + 8) + 8LL);
    else
      a3 = 0LL;
    LOBYTE(v10) = 0;
    LOBYTE(v11) = 0;
    LOBYTE(v12) = 0;
    LOBYTE(v13) = 0;
    LOBYTE(v14) = 0;
    LOBYTE(v15) = 0;
    LOBYTE(v24) = 0;
    LOBYTE(v23) = 0;
    LOBYTE(v22) = 0;
    v16 = v25;
    if ( v8 )
    {
      v10 = *v8;
      v11 = v8[1];
      v12 = v8[2];
      v13 = v8[3];
      v14 = v8[4];
      v15 = v8[5];
      v3 = v8[6];
      v24 = v8[7];
      v23 = v8[8];
      v22 = v8[9];
      v16 = v25;
    }
    if ( ((unsigned __int16)Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
      McTemplateK0pppqxqqqqqqqpppqqqqqqqqqqtpht(
        *((_QWORD *)a2 + 2),
        (__int64)&EventReportAdapterAllocation,
        (__int64)a3,
        (__int64)a3,
        (char)a1,
        *(_QWORD *)(*((_QWORD *)a1 + 2) + 16LL),
        v16,
        *((_QWORD *)a2 + 2),
        *((_DWORD *)a2 + 8),
        v20,
        *((_DWORD *)a2 + 17),
        *((_DWORD *)a2 + 18),
        v21,
        *((_DWORD *)a2 + 16),
        *((_DWORD *)a2 + 94),
        (char)a2,
        v7,
        v4,
        v10,
        v11,
        v12,
        v13,
        v14,
        v15,
        v3,
        v24,
        v23,
        v22,
        (*((_DWORD *)a2 + 21) & 2) != 0,
        *((_QWORD *)a2 + 45),
        *((_BYTE *)a2 + 76) & 0x3F,
        BYTE1(*((_DWORD *)a2 + 19)) & 1);
  }
  v17 = *((_QWORD *)a2 + 63);
  if ( *(_WORD *)(v17 + 4) && bTracingEnabled && ((unsigned __int8)Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
  {
    LOBYTE(v19) = *((_BYTE *)a2 + 432);
    LOBYTE(v18) = *(_BYTE *)(v17 + 4);
    McTemplateK0pcc(v17, &EventReportOfferAllocation, (__int64)a3, a2, v18, v19);
  }
}
