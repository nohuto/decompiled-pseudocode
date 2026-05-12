/*
 * XREFs of RaidBusEnumeratorIssueSynchronousRequest @ 0x1C0014C34
 * Callers:
 *     RaidBusEnumeratorIssueReportLuns @ 0x1C0014A40 (RaidBusEnumeratorIssueReportLuns.c)
 *     RaidBusEnumeratorGenericInquiry @ 0x1C0014B30 (RaidBusEnumeratorGenericInquiry.c)
 * Callees:
 *     RaSendIrpSynchronous @ 0x1C0001B68 (RaSendIrpSynchronous.c)
 *     RaidBuildScsiIrp @ 0x1C0015058 (RaidBuildScsiIrp.c)
 *     GetSrbScsiData @ 0x1C001C960 (GetSrbScsiData.c)
 *     memset @ 0x1C001F180 (memset.c)
 *     WPP_SF_qdddD @ 0x1C0030854 (WPP_SF_qdddD.c)
 *     WPP_SF_qdddDDs @ 0x1C00308D8 (WPP_SF_qdddDDs.c)
 */

__int64 __fastcall RaidBusEnumeratorIssueSynchronousRequest(
        _QWORD *a1,
        __int64 a2,
        PIRP *a3,
        __int128 *a4,
        unsigned __int8 a5)
{
  __int64 v5; // rbx
  char v7; // si
  char v8; // r14
  PIRP *v9; // rdx
  unsigned __int8 v10; // r15
  unsigned __int8 v11; // r12
  unsigned __int8 v12; // r13
  PIRP v13; // r9
  __int128 v14; // xmm5
  __int128 v15; // xmm4
  __int128 v16; // xmm3
  __int128 v17; // xmm2
  char v18; // al
  __int128 v19; // xmm1
  __int64 v20; // xmm0_8
  __int64 result; // rax
  int v22; // eax
  int Status; // ebx
  _BYTE *v24; // r9
  unsigned __int8 v25; // cl
  char v26; // dl
  unsigned __int64 v27; // rax
  __int64 v28; // rcx
  __int64 v30; // rax
  __int128 v31; // xmm1
  __int128 v32; // xmm0
  __int128 v33; // xmm1
  __int128 v34; // xmm0
  __int128 v35; // xmm1
  __int128 v36; // xmm0
  __int128 v37; // xmm1
  __int128 v38; // xmm0
  __int128 v39; // xmm1
  __int128 v40; // xmm0
  __int64 v41; // rax
  char *SrbScsiData; // rax
  __int128 v43; // xmm1
  __int128 v44; // xmm0
  __int128 v45; // xmm1
  __int128 v46; // xmm0
  __int128 v47; // xmm1
  __int128 v48; // xmm0
  __int128 v49; // xmm1
  __int128 v50; // xmm0
  __int128 v51; // xmm1
  __int128 v52; // xmm0
  __int64 v53; // rax
  _BYTE *v54; // rcx
  _BYTE *v55; // rax
  char v56; // r14
  const char *v57; // r10
  PIRP Irp; // [rsp+50h] [rbp-B0h]
  _BYTE *v59; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v60; // [rsp+60h] [rbp-A0h]
  __int64 v61; // [rsp+68h] [rbp-98h]
  __int128 v62; // [rsp+70h] [rbp-90h]
  __int128 v63; // [rsp+80h] [rbp-80h]
  __int128 v64; // [rsp+90h] [rbp-70h]
  __int128 v65; // [rsp+A0h] [rbp-60h]
  __int128 v66; // [rsp+B0h] [rbp-50h]
  _OWORD v67[6]; // [rsp+C0h] [rbp-40h] BYREF
  __int128 v68; // [rsp+120h] [rbp+20h]
  __int128 v69; // [rsp+130h] [rbp+30h]
  __int128 v70; // [rsp+140h] [rbp+40h]
  __int128 v71; // [rsp+150h] [rbp+50h]
  __int128 v72; // [rsp+160h] [rbp+60h]
  __int128 v73; // [rsp+170h] [rbp+70h]
  __int128 v74; // [rsp+180h] [rbp+80h]
  __int128 v75; // [rsp+190h] [rbp+90h]
  __int128 v76; // [rsp+1A0h] [rbp+A0h]
  __int128 v77; // [rsp+1B0h] [rbp+B0h]
  __int128 v78; // [rsp+1C0h] [rbp+C0h]
  __int64 v79; // [rsp+1D0h] [rbp+D0h]
  char v81; // [rsp+238h] [rbp+138h]
  int v83; // [rsp+248h] [rbp+148h]

  v5 = *(_QWORD *)(a2 + 8);
  v59 = 0LL;
  v83 = 2;
  a5 = 0;
  v7 = 0;
  v8 = 0;
  memset(v67, 0, 0x58uLL);
  v9 = a3;
  v10 = 0;
  v11 = 0;
  v81 = 0;
  v12 = 0;
  v61 = v5;
  v13 = *a3;
  Irp = *a3;
  if ( *((_BYTE *)a4 + 2) != 40 )
  {
    v14 = *a4;
    v10 = *((_BYTE *)a4 + 5);
    v15 = a4[1];
    v11 = *((_BYTE *)a4 + 6);
    v16 = a4[2];
    v12 = *((_BYTE *)a4 + 7);
    v17 = a4[3];
    v18 = *((_BYTE *)a4 + 72);
    v19 = a4[4];
    v20 = *((_QWORD *)a4 + 10);
    v66 = *a4;
    v65 = v15;
    v64 = v16;
    v63 = v17;
    v62 = v19;
    v60 = v20;
LABEL_3:
    v81 = v18;
    goto LABEL_4;
  }
  v30 = *((_QWORD *)a4 + 22);
  v31 = a4[1];
  v68 = *a4;
  v32 = a4[2];
  v69 = v31;
  v33 = a4[3];
  v70 = v32;
  v34 = a4[4];
  v71 = v33;
  v35 = a4[5];
  v72 = v34;
  v36 = a4[6];
  v73 = v35;
  v37 = a4[7];
  v74 = v36;
  v38 = a4[8];
  v75 = v37;
  v39 = a4[9];
  v76 = v38;
  v40 = a4[10];
  v77 = v39;
  v78 = v40;
  v79 = v30;
  v41 = (__int64)a4 + *((unsigned int *)a4 + 13);
  if ( *(_WORD *)v41 == 1 )
  {
    v10 = *(_BYTE *)(v41 + 8);
    v11 = *(_BYTE *)(v41 + 9);
    v12 = *(_BYTE *)(v41 + 10);
  }
  SrbScsiData = (char *)GetSrbScsiData((_DWORD)a4, 0, 0, 0, 0LL, 0LL);
  v20 = *(_QWORD *)&v67[5];
  v19 = v67[4];
  v17 = v67[3];
  v16 = v67[2];
  v15 = v67[1];
  v14 = v67[0];
  v13 = Irp;
  v9 = a3;
  v60 = *(_QWORD *)&v67[5];
  v62 = v67[4];
  v63 = v67[3];
  v64 = v67[2];
  v65 = v67[1];
  v66 = v67[0];
  if ( SrbScsiData )
  {
    v18 = *SrbScsiData;
    goto LABEL_3;
  }
  while ( 1 )
  {
LABEL_4:
    if ( *((_BYTE *)a4 + 2) == 40 )
    {
      v43 = v69;
      *a4 = v68;
      v44 = v70;
      a4[1] = v43;
      v45 = v71;
      a4[2] = v44;
      v46 = v72;
      a4[3] = v45;
      v47 = v73;
      a4[4] = v46;
      v48 = v74;
      a4[5] = v47;
      v49 = v75;
      a4[6] = v48;
      v50 = v76;
      a4[7] = v49;
      v51 = v77;
      a4[8] = v50;
      v52 = v78;
      v53 = v79;
      a4[9] = v51;
      a4[10] = v52;
      *((_QWORD *)a4 + 22) = v53;
    }
    else
    {
      *a4 = v14;
      a4[1] = v15;
      a4[2] = v16;
      a4[3] = v17;
      a4[4] = v19;
      *((_QWORD *)a4 + 10) = v20;
    }
    result = RaidBuildScsiIrp(v13, v9[1], a4);
    if ( (int)result < 0 )
      return result;
    v22 = *(_DWORD *)(v5 + 1000);
    if ( *((_BYTE *)a4 + 2) == 40 )
      *((_DWORD *)a4 + 10) = v22;
    else
      *((_DWORD *)a4 + 5) = v22;
    Status = RaSendIrpSynchronous(*(PDEVICE_OBJECT *)(v5 + 8), Irp);
    if ( Status < 0 )
    {
      if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x4000) != 0
        && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
      {
        WPP_SF_qdddD(WPP_GLOBAL_Control->AttachedDevice, v11, v10, *a1, v10, v11, v12, Status);
      }
      return (unsigned int)Status;
    }
    if ( *((_BYTE *)a4 + 2) == 40 )
    {
      GetSrbScsiData((_DWORD)a4, 0, 0, 0, (__int64)&v59, (__int64)&a5);
      v25 = a5;
      v24 = v59;
    }
    else
    {
      v24 = (_BYTE *)*((_QWORD *)a4 + 4);
      v25 = *((_BYTE *)a4 + 11);
      v59 = v24;
      a5 = v25;
    }
    v26 = *((_BYTE *)a4 + 3);
    if ( v26 < 0 )
    {
      if ( v24 )
      {
        v7 = 0;
        if ( v25 )
        {
          v54 = &v24[v25];
          v55 = v24 + 8;
          if ( (unsigned __int8)((*v24 & 0x7F) - 114) <= 1u )
          {
            if ( v55 <= v54 )
            {
              v56 = v24[1];
              goto LABEL_46;
            }
          }
          else if ( v55 <= v54 )
          {
            v56 = v24[2];
LABEL_46:
            v7 = 1;
            v8 = v56 & 0xF;
          }
        }
      }
    }
    v27 = *((_BYTE *)a4 + 3) & 0x3F;
    if ( (unsigned int)v27 <= 0x21 && (v28 = 0x300000580LL, _bittest64(&v28, v27)) )
    {
      Status = -1073741810;
    }
    else
    {
      if ( v7 && v8 == 5 )
      {
        Status = -1073741810;
        goto LABEL_18;
      }
      if ( v26 == 18 )
      {
        Status = 0;
        *((_BYTE *)a4 + 3) = 1;
        goto LABEL_18;
      }
      Status = Irp->IoStatus.Status;
    }
    if ( Status < 0
      && Status != -1073741810
      && Status != -1073741808
      && WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x4000) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
    {
      v57 = "retried";
      if ( !v83 )
        v57 = "not retried";
      WPP_SF_qdddDDs(WPP_GLOBAL_Control->AttachedDevice, v12, v11, *a1, v10, v11, v12, v81, v26, (__int64)v57);
    }
LABEL_18:
    if ( !v83-- )
      return (unsigned int)Status;
    if ( (int)(Status + 0x80000000) < 0 )
      return (unsigned int)Status;
    v20 = v60;
    v13 = Irp;
    v9 = a3;
    v19 = v62;
    v17 = v63;
    v16 = v64;
    v15 = v65;
    v14 = v66;
    if ( Status == -1073741810 )
      return (unsigned int)Status;
    v5 = v61;
  }
}
