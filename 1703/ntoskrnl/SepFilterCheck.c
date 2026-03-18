/*
 * XREFs of SepFilterCheck @ 0x14008E7E0
 * Callers:
 *     SeAccessCheckWithHint @ 0x14008D7C0 (SeAccessCheckWithHint.c)
 *     SeAccessCheckByType @ 0x140092020 (SeAccessCheckByType.c)
 *     SepCommonAccessCheckEx @ 0x1401326AC (SepCommonAccessCheckEx.c)
 *     SepAdjustAccessStateForConstraints @ 0x14042B498 (SepAdjustAccessStateForConstraints.c)
 *     SeAdjustAccessStateForAccessConstraints @ 0x14042B5A0 (SeAdjustAccessStateForAccessConstraints.c)
 *     SepAccessCheckAndAuditAlarm @ 0x14046B2C0 (SepAccessCheckAndAuditAlarm.c)
 *     SeShouldCheckForAccessRightsFromParent @ 0x14050C420 (SeShouldCheckForAccessRightsFromParent.c)
 * Callees:
 *     SepFreeResourceInfo @ 0x14003E044 (SepFreeResourceInfo.c)
 *     AuthzBasepInitializeResourceClaimsFromSacl @ 0x140065DA4 (AuthzBasepInitializeResourceClaimsFromSacl.c)
 *     AuthzBasepEvaluateAceCondition @ 0x1400897C0 (AuthzBasepEvaluateAceCondition.c)
 *     ExAcquireResourceSharedLite @ 0x14008F530 (ExAcquireResourceSharedLite.c)
 *     KeLeaveCriticalRegion @ 0x1400EEB00 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x1400EEB50 (ExReleaseResourceLite.c)
 */

__int64 __fastcall SepFilterCheck(__int64 a1, void **a2, _DWORD *a3, char a4, int *a5)
{
  int *v5; // r13
  int v6; // r12d
  unsigned int v7; // edi
  char v8; // r15
  int v9; // ebp
  _DWORD *v10; // r11
  __int16 v11; // r10
  __int64 v12; // rsi
  void **v13; // r14
  __int64 v14; // rbx
  unsigned int v15; // ecx
  __int64 v17; // rax
  unsigned __int16 v18; // cx
  int v19; // ebp
  int v20; // eax
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v22; // rax
  void *v23; // r10
  void *v24; // r8
  void *v25; // rdx
  void *v26; // r9
  int v27; // eax
  int v28; // ecx
  _QWORD *v29; // rax
  void *v30; // r8
  void *v31; // rdx
  void *v32; // rcx
  void *v33; // r9
  char v34; // al
  int v35; // [rsp+60h] [rbp-68h]
  int v36; // [rsp+64h] [rbp-64h]
  unsigned int v37; // [rsp+68h] [rbp-60h]
  _DWORD *v38; // [rsp+70h] [rbp-58h] BYREF
  int v39; // [rsp+D0h] [rbp+8h] BYREF
  int v40; // [rsp+D8h] [rbp+10h]
  _DWORD *v41; // [rsp+E0h] [rbp+18h]
  char v42; // [rsp+E8h] [rbp+20h]

  v42 = a4;
  v41 = a3;
  v5 = a5;
  v6 = -1;
  v7 = 0;
  v8 = 0;
  v9 = 0;
  v38 = 0LL;
  v10 = a3;
  *a5 = -1;
  v11 = *(_WORD *)(a1 + 2);
  if ( (~(_BYTE)v11 & 0x10) != 0 )
  {
    v12 = 0LL;
  }
  else if ( v11 < 0 )
  {
    v17 = *(unsigned int *)(a1 + 12);
    if ( (_DWORD)v17 )
      v12 = a1 + v17;
    else
      v12 = 0LL;
  }
  else
  {
    v12 = *(_QWORD *)(a1 + 24);
  }
  LOBYTE(v40) = 0;
  v13 = (void **)&v38;
  if ( a2 )
    v13 = a2;
  while ( 1 )
  {
    if ( !v12 || (v14 = v12 + 8, v15 = 0, !*(_WORD *)(v12 + 4)) )
    {
LABEL_11:
      v14 = 0LL;
      goto LABEL_12;
    }
    while ( v15 < v7 || *(_BYTE *)v14 != 21 )
    {
      ++v15;
      v14 += *(unsigned __int16 *)(v14 + 2);
      if ( v15 >= *(unsigned __int16 *)(v12 + 4) )
        goto LABEL_11;
    }
    v7 = v15;
    v37 = v15;
    if ( (*(_BYTE *)(v14 + 1) & 8) != 0 )
      goto LABEL_12;
    v18 = 4 * (*(unsigned __int8 *)(v14 + 9) + 2);
    v19 = v18;
    v20 = *(unsigned __int16 *)(v14 + 2) - v18;
    LOWORD(a5) = v18;
    v35 = v18;
    if ( v20 - 8 <= 0 )
      break;
    v36 = *(_DWORD *)(v14 + 4);
    if ( (v36 & 0xFF000000) != 0 )
      break;
    if ( a4 && !v8 )
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      ExAcquireResourceSharedLite(*((PERESOURCE *)v10 + 6), 1u);
      v10 = v41;
      v8 = 1;
      v18 = (unsigned __int16)a5;
      v7 = v37;
    }
    if ( !*v13 )
    {
      v9 = AuthzBasepInitializeResourceClaimsFromSacl(v12, v13);
      if ( v9 < 0 )
        goto LABEL_13;
      v10 = v41;
      v18 = (unsigned __int16)a5;
      v19 = v35;
    }
    v22 = (_QWORD *)*((_QWORD *)v10 + 137);
    v39 = -1;
    if ( v22 )
      v23 = (void *)v22[75];
    else
      v23 = 0LL;
    if ( v22 )
      v24 = (void *)v22[73];
    else
      v24 = 0LL;
    if ( v22 )
      v25 = (void *)v22[74];
    else
      v25 = 0LL;
    if ( v22 )
      v26 = (void *)v22[72];
    else
      v26 = 0LL;
    v27 = *(unsigned __int16 *)(v14 + 2) - v19;
    a5 = (int *)(v18 + v14 + 8);
    v9 = AuthzBasepEvaluateAceCondition(v10, *((void **)v10 + 97), *v13, v26, v25, v24, v23, a5, v27 - 8, 1u, 0, &v39);
    if ( v9 < 0 )
      goto LABEL_13;
    if ( v39 != 1 )
    {
      v28 = (unsigned __int8)v40;
      if ( (*(_BYTE *)(v14 + 1) & 0x40) != 0 )
        v28 = 1;
      v40 = v28;
      v6 &= v36 | 0x1000000;
    }
    v10 = v41;
    if ( (v41[50] & 0x10) != 0 )
    {
      v29 = (_QWORD *)*((_QWORD *)v41 + 137);
      v39 = -1;
      if ( v29 )
        v30 = (void *)v29[75];
      else
        v30 = 0LL;
      if ( v29 )
        v31 = (void *)v29[73];
      else
        v31 = 0LL;
      if ( v29 )
        v32 = (void *)v29[74];
      else
        v32 = 0LL;
      if ( v29 )
        v33 = (void *)v29[72];
      else
        v33 = 0LL;
      v9 = AuthzBasepEvaluateAceCondition(
             v41,
             *((void **)v41 + 97),
             *v13,
             v33,
             v32,
             v31,
             v30,
             a5,
             (unsigned int)*(unsigned __int16 *)(v14 + 2) - v35 - 8,
             1u,
             1u,
             &v39);
      if ( v9 < 0 )
        goto LABEL_13;
      a4 = v42;
      v10 = v41;
      if ( v39 != 1 )
      {
        v34 = v40;
        if ( (*(_BYTE *)(v14 + 1) & 0x40) != 0 )
          v34 = 1;
        LOBYTE(v40) = v34;
        v6 &= v36 | 0x1000000;
      }
    }
    else
    {
      a4 = v42;
    }
LABEL_12:
    ++v7;
    if ( !v14 )
      goto LABEL_13;
  }
  v9 = -1073741705;
LABEL_13:
  if ( v6 != -1 )
  {
    *((_BYTE *)v5 + 4) = v40;
    *v5 = v6;
  }
  if ( v8 )
  {
    ExReleaseResourceLite(*((PERESOURCE *)v41 + 6));
    KeLeaveCriticalRegion();
  }
  if ( v38 )
    SepFreeResourceInfo(v38);
  return (unsigned int)v9;
}
