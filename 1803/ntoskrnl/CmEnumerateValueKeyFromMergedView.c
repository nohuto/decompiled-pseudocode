/*
 * XREFs of CmEnumerateValueKeyFromMergedView @ 0x1406F3B38
 * Callers:
 *     CmQueryKey @ 0x1404AE2E0 (CmQueryKey.c)
 *     NtEnumerateValueKey @ 0x140596600 (NtEnumerateValueKey.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     CmpFindNameInList @ 0x1404A389C (CmpFindNameInList.c)
 *     CmpQueryKeyValueData @ 0x1404A6780 (CmpQueryKeyValueData.c)
 *     CmpLockRegistry @ 0x1404A71E0 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x1404A8188 (CmpUnlockRegistry.c)
 *     CmpUnlockTwoKcbs @ 0x1404ACE30 (CmpUnlockTwoKcbs.c)
 *     CmpLockTwoKcbsShared @ 0x1404ACECC (CmpLockTwoKcbsShared.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x1404AECB0 (CmpIsKeyDeletedForKeyBody.c)
 *     CmpTransSearchAddTransFromKeyBody @ 0x14054BFC8 (CmpTransSearchAddTransFromKeyBody.c)
 */

__int64 __fastcall CmEnumerateValueKeyFromMergedView(
        __int64 a1,
        __int64 a2,
        char a3,
        unsigned int a4,
        int a5,
        _DWORD *Src,
        unsigned int a7,
        int *a8,
        unsigned int *a9)
{
  __int64 v12; // r15
  int KeyValueData; // ebx
  _DWORD *v14; // r12
  ULONG_PTR v15; // rdi
  ULONG_PTR v16; // r14
  __int64 v17; // r8
  __int64 v18; // r9
  char v19; // al
  unsigned int *v20; // r13
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rsi
  unsigned int v24; // esi
  unsigned int v25; // r15d
  __int64 v26; // rax
  __int64 v27; // rcx
  __int64 v28; // r15
  __int64 v29; // rax
  __int64 v30; // r13
  __int16 v31; // r9
  __int64 v32; // rcx
  __int64 v33; // rsi
  unsigned int v34; // ecx
  __int64 v35; // rax
  int v37; // [rsp+48h] [rbp-69h]
  unsigned int v38; // [rsp+4Ch] [rbp-65h]
  _DWORD v39[2]; // [rsp+50h] [rbp-61h] BYREF
  __int64 v40; // [rsp+58h] [rbp-59h]
  __int64 v41; // [rsp+60h] [rbp-51h] BYREF
  unsigned int *v42; // [rsp+68h] [rbp-49h]
  _DWORD v43[2]; // [rsp+70h] [rbp-41h] BYREF
  __int64 v44; // [rsp+78h] [rbp-39h]
  _DWORD v45[2]; // [rsp+80h] [rbp-31h] BYREF
  _DWORD v46[2]; // [rsp+88h] [rbp-29h] BYREF
  _DWORD v47[2]; // [rsp+90h] [rbp-21h] BYREF
  __int64 v48; // [rsp+98h] [rbp-19h]
  __int16 v49; // [rsp+A0h] [rbp-11h] BYREF
  __int64 v50; // [rsp+A8h] [rbp-9h]
  int v51; // [rsp+F8h] [rbp+47h]

  v41 = 0LL;
  v48 = 0LL;
  v46[0] = -1;
  v46[1] = 0;
  v44 = 0LL;
  v12 = 0LL;
  v47[0] = -1;
  KeyValueData = 0;
  v47[1] = 0;
  v14 = 0LL;
  v42 = 0LL;
  v51 = 0;
  v37 = 0;
  v40 = 0LL;
  v43[0] = -1;
  v43[1] = 0;
  v45[0] = -1;
  v45[1] = 0;
  v39[0] = -1;
  v39[1] = 0;
  if ( !a3 )
    CmpLockRegistry();
  if ( *(_QWORD *)(a1 + 56) || *(_QWORD *)(a1 + 64) )
  {
    KeyValueData = CmpTransSearchAddTransFromKeyBody((_QWORD *)a1, &v41);
    if ( KeyValueData < 0 )
    {
      if ( !a3 )
        goto LABEL_66;
      return (unsigned int)KeyValueData;
    }
    v12 = v41;
  }
  v15 = *(_QWORD *)(a1 + 8);
  v16 = *(_QWORD *)(a2 + 8);
  if ( !a3 )
    CmpLockTwoKcbsShared(*(_QWORD *)(a1 + 8), *(_QWORD *)(a2 + 8));
  if ( CmpIsKeyDeletedForKeyBody(a1, v12) )
  {
    v19 = *(_BYTE *)(a1 + 48);
LABEL_13:
    KeyValueData = (v19 & 1) != 0 ? -1073740763 : -1073741444;
    goto LABEL_64;
  }
  if ( CmpIsKeyDeletedForKeyBody(a2, v12) )
  {
    v19 = *(_BYTE *)(a2 + 48);
    goto LABEL_13;
  }
  if ( !v12 )
    goto LABEL_23;
  if ( *(_QWORD *)(v15 + 280) == v12 )
  {
    v20 = (unsigned int *)(v15 + 272);
    v42 = (unsigned int *)(v15 + 272);
  }
  else
  {
    v20 = 0LL;
  }
  if ( *(_QWORD *)(v16 + 280) == v12 )
    v14 = (_DWORD *)(v16 + 272);
  if ( !v20 )
  {
LABEL_23:
    v21 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _DWORD *))(*(_QWORD *)(v15 + 24) + 8LL))(
            *(_QWORD *)(v15 + 24),
            *(unsigned int *)(v15 + 32),
            v46);
    v48 = v21;
    if ( !v21 )
    {
      KeyValueData = -1073741670;
      goto LABEL_64;
    }
    v20 = (unsigned int *)(v21 + 36);
    v42 = (unsigned int *)(v21 + 36);
  }
  if ( v14 )
    goto LABEL_30;
  v22 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _DWORD *))(*(_QWORD *)(v16 + 24) + 8LL))(
          *(_QWORD *)(v16 + 24),
          *(unsigned int *)(v16 + 32),
          v47);
  v44 = v22;
  v23 = v22;
  if ( v22 )
  {
    v14 = (_DWORD *)(v22 + 36);
LABEL_30:
    v24 = 0;
    v25 = 0;
    while ( v25 < *v20 )
    {
      v26 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _DWORD *))(*(_QWORD *)(v15 + 24) + 8LL))(
              *(_QWORD *)(v15 + 24),
              v20[1],
              v43);
      v40 = v26;
      if ( !v26 )
      {
        KeyValueData = -1073741670;
        goto LABEL_59;
      }
      v27 = v25;
      v28 = *(_QWORD *)(v15 + 24);
      v38 = *(_DWORD *)(v26 + 4 * v27);
      v29 = (*(__int64 (__fastcall **)(__int64, _QWORD, _DWORD *))(v28 + 8))(v28, v38, v39);
      v30 = v29;
      if ( !v29 )
      {
        KeyValueData = -1073741670;
LABEL_45:
        v33 = 0LL;
        goto LABEL_55;
      }
      v31 = *(_WORD *)(v29 + 16);
      v50 = v29 + 20;
      v49 = *(_WORD *)(v29 + 2);
      if ( CmpFindNameInList(*(_QWORD *)(v16 + 24), (int)v14, (int)&v49, (v31 & 1) << 16, 0LL, (__int64)&v41)
        && (_DWORD)v41 == -1 )
      {
        if ( v24 == a4 )
        {
          v32 = v15;
          v33 = 0LL;
          goto LABEL_53;
        }
        v37 = ++v24;
      }
      v25 = ++v51;
      (*(void (__fastcall **)(_QWORD, _DWORD *))(*(_QWORD *)(v15 + 24) + 16LL))(*(_QWORD *)(v15 + 24), v39);
      if ( v40 )
      {
        (*(void (__fastcall **)(_QWORD, _DWORD *))(*(_QWORD *)(v15 + 24) + 16LL))(*(_QWORD *)(v15 + 24), v43);
        v40 = 0LL;
      }
      if ( v24 > a4 )
        goto LABEL_45;
      v20 = v42;
    }
    v34 = v24 + *v14;
    if ( v34 <= a4 )
    {
      KeyValueData = -2147483622;
      if ( a9 )
        *a9 = v34;
      goto LABEL_45;
    }
    v35 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _DWORD *))(*(_QWORD *)(v16 + 24) + 8LL))(
            *(_QWORD *)(v16 + 24),
            (unsigned int)v14[1],
            v45);
    v33 = v35;
    if ( !v35
      || (v28 = *(_QWORD *)(v16 + 24),
          v38 = *(_DWORD *)(v35 + 4LL * (a4 - v37)),
          (v30 = (*(__int64 (__fastcall **)(__int64, _QWORD, _DWORD *))(v28 + 8))(v28, v38, v39)) == 0) )
    {
      KeyValueData = -1073741670;
      goto LABEL_55;
    }
    v32 = v16;
LABEL_53:
    KeyValueData = CmpQueryKeyValueData(v32, v38, v30, a5, Src, a7, a8);
    if ( v30 )
      (*(void (__fastcall **)(__int64, _DWORD *))(v28 + 16))(v28, v39);
LABEL_55:
    if ( v40 )
      (*(void (__fastcall **)(_QWORD, _DWORD *))(*(_QWORD *)(v15 + 24) + 16LL))(*(_QWORD *)(v15 + 24), v43);
    if ( v33 )
      (*(void (__fastcall **)(_QWORD, _DWORD *))(*(_QWORD *)(v16 + 24) + 16LL))(*(_QWORD *)(v16 + 24), v45);
LABEL_59:
    v23 = v44;
    goto LABEL_60;
  }
  KeyValueData = -1073741670;
LABEL_60:
  if ( v48 )
    (*(void (__fastcall **)(_QWORD, _DWORD *))(*(_QWORD *)(v15 + 24) + 16LL))(*(_QWORD *)(v15 + 24), v46);
  if ( v23 )
    (*(void (__fastcall **)(_QWORD, _DWORD *))(*(_QWORD *)(v16 + 24) + 16LL))(*(_QWORD *)(v16 + 24), v47);
LABEL_64:
  if ( !a3 )
  {
    CmpUnlockTwoKcbs(v15, v16, v17, v18);
LABEL_66:
    CmpUnlockRegistry();
  }
  return (unsigned int)KeyValueData;
}
