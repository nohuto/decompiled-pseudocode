/*
 * XREFs of SepLogTokenSidManagement @ 0x1406F8D04
 * Callers:
 *     SepDereferenceSidValuesBlock @ 0x1406F6DBC (SepDereferenceSidValuesBlock.c)
 *     SepSetTokenUserAndGroups @ 0x1406F6F14 (SepSetTokenUserAndGroups.c)
 * Callees:
 *     EtwWrite @ 0x140094650 (EtwWrite.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     RtlConvertLuidToUlonglong @ 0x140248140 (RtlConvertLuidToUlonglong.c)
 *     SepGetSidValuesDump @ 0x140248690 (SepGetSidValuesDump.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     SepGetSidManagementActionName @ 0x1406F8B80 (SepGetSidManagementActionName.c)
 */

void __fastcall SepLogTokenSidManagement(int a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v6; // r10d
  __int64 v7; // r9
  _DWORD *v8; // r9
  __int64 v9; // r8
  int v10; // edx
  unsigned __int64 v11; // rax
  void *v12; // rcx
  void *v13; // r9
  int v14; // r10d
  void *v15; // rax
  int v16; // r9d
  int v17; // eax
  unsigned int v18; // ebx
  PVOID SidValuesDump; // r14
  __int64 v20; // rax
  unsigned int v21; // ebx
  int v22; // ecx
  __int64 v23; // rax
  ULONG v24; // ebx
  void *v25; // rdi
  PVOID v26; // rax
  ULONG v27; // ecx
  __int64 v28; // rdx
  int v29; // [rsp+30h] [rbp-D0h] BYREF
  int v30; // [rsp+34h] [rbp-CCh] BYREF
  int v31; // [rsp+38h] [rbp-C8h] BYREF
  int v32; // [rsp+3Ch] [rbp-C4h] BYREF
  int v33; // [rsp+40h] [rbp-C0h] BYREF
  ULONG v34; // [rsp+44h] [rbp-BCh] BYREF
  int v35; // [rsp+48h] [rbp-B8h] BYREF
  ULONG v36; // [rsp+4Ch] [rbp-B4h] BYREF
  ULONGLONG v37; // [rsp+50h] [rbp-B0h] BYREF
  ULONGLONG v38; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v39; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v40; // [rsp+68h] [rbp-98h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+70h] [rbp-90h] BYREF
  void *v42; // [rsp+80h] [rbp-80h]
  int v43; // [rsp+88h] [rbp-78h]
  int v44; // [rsp+8Ch] [rbp-74h]
  void *v45; // [rsp+90h] [rbp-70h]
  int v46; // [rsp+98h] [rbp-68h]
  int v47; // [rsp+9Ch] [rbp-64h]
  void *v48; // [rsp+A0h] [rbp-60h]
  int v49; // [rsp+A8h] [rbp-58h]
  int v50; // [rsp+ACh] [rbp-54h]
  ULONGLONG *v51; // [rsp+B0h] [rbp-50h]
  __int64 v52; // [rsp+B8h] [rbp-48h]
  ULONGLONG *v53; // [rsp+C0h] [rbp-40h]
  __int64 v54; // [rsp+C8h] [rbp-38h]
  int *v55; // [rsp+D0h] [rbp-30h]
  __int64 v56; // [rsp+D8h] [rbp-28h]
  int *v57; // [rsp+E0h] [rbp-20h]
  __int64 v58; // [rsp+E8h] [rbp-18h]
  int *v59; // [rsp+F0h] [rbp-10h]
  __int64 v60; // [rsp+F8h] [rbp-8h]
  __int64 *v61; // [rsp+100h] [rbp+0h]
  __int64 v62; // [rsp+108h] [rbp+8h]
  int *v63; // [rsp+110h] [rbp+10h]
  __int64 v64; // [rsp+118h] [rbp+18h]
  PVOID v65; // [rsp+120h] [rbp+20h]
  int v66; // [rsp+128h] [rbp+28h]
  int v67; // [rsp+12Ch] [rbp+2Ch]

  v6 = a1;
  if ( EtwKernelProvRegHandle && SepTokenSidManagementLoggingEnabled )
  {
    if ( a4 )
    {
      v37 = RtlConvertLuidToUlonglong((LUID)(a4 + 16));
      v38 = RtlConvertLuidToUlonglong((LUID)(v7 + 24));
      v29 = v8[48];
      v30 = v8[49];
      v31 = v8[50];
    }
    else
    {
      v37 = 0LL;
      v38 = 0LL;
      v29 = 0;
      v30 = 0;
      v31 = 0;
    }
    UserData.Ptr = (ULONGLONG)SepGetSidManagementActionName(v6, &v34);
    v10 = 2;
    UserData.Size = v34;
    UserData.Reserved = 0;
    v11 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[15];
    v12 = &unk_14038C458;
    if ( v11 && *(_WORD *)v11 )
    {
      v13 = *(void **)(v11 + 8);
      v14 = *(unsigned __int16 *)(v11 + 2);
    }
    else
    {
      v13 = &unk_14038C458;
      v14 = 2;
    }
    v42 = v13;
    v43 = v14;
    v44 = 0;
    if ( v9 && *(_WORD *)(v9 + 56) )
    {
      v15 = *(void **)(v9 + 64);
      v16 = *(unsigned __int16 *)(v9 + 58);
    }
    else
    {
      v15 = &unk_14038C458;
      v16 = 2;
    }
    v45 = v15;
    v46 = v16;
    v47 = 0;
    if ( v9 && *(_WORD *)(v9 + 72) )
    {
      v12 = *(void **)(v9 + 80);
      v10 = *(unsigned __int16 *)(v9 + 74);
    }
    v48 = v12;
    v51 = &v37;
    v53 = &v38;
    v55 = &v29;
    v57 = &v30;
    v59 = &v31;
    v49 = v10;
    v50 = 0;
    v52 = 8LL;
    v54 = 8LL;
    v56 = 4LL;
    v58 = 4LL;
    v60 = 4LL;
    if ( a2 )
      v39 = *(_QWORD *)(a2 + 8);
    else
      v39 = 0LL;
    v62 = 8LL;
    v61 = &v39;
    if ( a2 )
      v17 = *(_DWORD *)(a2 + 16);
    else
      v17 = 0;
    v32 = v17;
    v63 = &v32;
    v18 = 11;
    v64 = 4LL;
    SidValuesDump = 0LL;
    if ( a2 && v17 )
    {
      SidValuesDump = SepGetSidValuesDump((_DWORD *)a2, &v35);
      v66 = v35;
      v18 = 12;
      v65 = SidValuesDump;
      v67 = 0;
    }
    if ( a3 )
      v40 = *(_QWORD *)(a3 + 8);
    else
      v40 = 0LL;
    v20 = 2LL * v18;
    v21 = v18 + 1;
    *(&UserData.Ptr + v20) = (ULONGLONG)&v40;
    *((_QWORD *)&UserData.Size + v20) = 8LL;
    if ( !a3 || a2 == a3 )
      v22 = 0;
    else
      v22 = *(_DWORD *)(a3 + 16);
    v23 = 2LL * v21;
    v33 = v22;
    v24 = v21 + 1;
    v25 = 0LL;
    *(&UserData.Ptr + v23) = (ULONGLONG)&v33;
    *((_QWORD *)&UserData.Size + v23) = 4LL;
    if ( a3 && v22 )
    {
      v26 = SepGetSidValuesDump((_DWORD *)a3, &v36);
      v27 = v36;
      v25 = v26;
      v28 = 2LL * v24++;
      *(&UserData.Ptr + v28) = (ULONGLONG)v26;
      *(&UserData.Size + 2 * v28) = v27;
      *(&UserData.Reserved + 2 * v28) = 0;
    }
    EtwWrite(EtwKernelProvRegHandle, &TokenSidManagementLog, 0LL, v24, &UserData);
    if ( SidValuesDump )
      ExFreePoolWithTag(SidValuesDump, 0);
    if ( v25 )
      ExFreePoolWithTag(v25, 0);
  }
}
