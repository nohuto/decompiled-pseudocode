/*
 * XREFs of sub_1800206A8 @ 0x1800206A8
 * Callers:
 *     sub_1800074BC @ 0x1800074BC (sub_1800074BC.c)
 *     sub_180020A2C @ 0x180020A2C (sub_180020A2C.c)
 * Callees:
 *     sub_180008F44 @ 0x180008F44 (sub_180008F44.c)
 *     sub_180009038 @ 0x180009038 (sub_180009038.c)
 *     sub_180009164 @ 0x180009164 (sub_180009164.c)
 *     sub_180009838 @ 0x180009838 (sub_180009838.c)
 *     sub_180009940 @ 0x180009940 (sub_180009940.c)
 *     sub_18001EFB4 @ 0x18001EFB4 (sub_18001EFB4.c)
 *     sub_18001F560 @ 0x18001F560 (sub_18001F560.c)
 *     sub_18001F5E8 @ 0x18001F5E8 (sub_18001F5E8.c)
 *     sub_18001FD40 @ 0x18001FD40 (sub_18001FD40.c)
 *     sub_180020404 @ 0x180020404 (sub_180020404.c)
 *     sub_180023990 @ 0x180023990 (sub_180023990.c)
 *     RtlGetCurrentServiceSessionId @ 0x180024AB0 (RtlGetCurrentServiceSessionId.c)
 *     sub_1800588D4 @ 0x1800588D4 (sub_1800588D4.c)
 *     sub_180095A28 @ 0x180095A28 (sub_180095A28.c)
 *     sub_1800A4DFC @ 0x1800A4DFC (sub_1800A4DFC.c)
 *     RtlGetCurrentProcessorNumber @ 0x1800A9950 (RtlGetCurrentProcessorNumber.c)
 *     memmove @ 0x1800ABA80 (memmove.c)
 *     memset @ 0x1800ABDC0 (memset.c)
 *     sub_1800FFB4C @ 0x1800FFB4C (sub_1800FFB4C.c)
 */

unsigned __int64 __fastcall sub_1800206A8(_DWORD *a1, unsigned __int64 a2, __int64 a3, unsigned int a4)
{
  unsigned __int64 v4; // rbp
  size_t v6; // r14
  __int64 v10; // rbx
  int v11; // edx
  __int64 v12; // r13
  __int64 v13; // r13
  char CurrentProcessorNumber; // al
  unsigned int v15; // ecx
  unsigned int v16; // eax
  void *v17; // rax
  unsigned __int64 v18; // rbx
  int v19; // ebp
  int v20; // eax
  size_t v21; // r8
  const void *v22; // rdx
  void *v23; // rcx
  __int64 v24; // rdx
  unsigned __int8 *v25; // rdx
  __int64 v26; // rcx
  int v27; // eax
  int v28; // edx
  int v29; // r8d
  unsigned int v30; // ebp
  int v31; // eax
  unsigned __int64 v33; // rax
  BOOL v34; // ebp
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  __int64 v39; // r9
  __int64 v40; // rcx
  size_t v41; // rbp
  int v42; // eax
  size_t v43; // rbp
  int v44; // eax
  unsigned __int64 v45; // rax
  unsigned __int64 v46; // r14
  int v47; // r8d
  int v48; // eax
  signed __int32 v49[8]; // [rsp+0h] [rbp-58h] BYREF

  v4 = *(_QWORD *)(a3 + 32);
  v6 = *(_QWORD *)(a3 + 24);
  if ( v4 > 0x3FF0 )
    goto LABEL_40;
  v10 = (__int64)(a1 + 72);
  v11 = *(_QWORD *)(a3 + 32);
  if ( (_DWORD)v6 != (_DWORD)v4 )
    v11 = v4 + 2;
  v12 = (unsigned __int8)byte_1801196F0[(unsigned __int64)(unsigned int)(v11 + 15) >> 4];
  if ( (*(_QWORD *)(v10 + 8 * v12 + 192) & 1) == 0 || sub_180009838(v10, v11, 1) )
  {
    v13 = *(_QWORD *)(v10 + 8 * v12 + 192);
    CurrentProcessorNumber = RtlGetCurrentProcessorNumber();
    v15 = *(unsigned __int8 *)(v10 + 56);
    v16 = CurrentProcessorNumber & 0x3F;
    if ( v16 >= v15 )
    {
      if ( v16 == v15 || (_BYTE)v15 == 1 )
        v16 = 0;
      else
        v16 = *(unsigned __int8 *)(v16 - v15 - 1 + *(_QWORD *)(v10 + 64));
    }
    v17 = (void *)sub_18001FD40(
                    (_QWORD *)v10,
                    v13,
                    *(_QWORD *)(*(_QWORD *)(v13 + 104) + 8LL * *(unsigned __int8 *)(*(_QWORD *)(v13 + 96) + v16)),
                    v6,
                    a4);
    v18 = (unsigned __int64)v17;
    if ( v17 && (a4 & 2) != 0 )
      memset(v17, 0, (unsigned int)v6);
  }
  else
  {
    v18 = -1LL;
  }
  if ( v18 == -1LL )
  {
LABEL_40:
    if ( v4 > 0x20000 )
    {
      if ( v4 <= 0x7F000 )
        v33 = (unsigned __int64)sub_18001EFB4((__int64)a1, v6, v4, a4);
      else
        v33 = sub_180009164((__int64)a1, v6, v4, a4);
    }
    else
    {
      v33 = (unsigned __int64)sub_180009940((__int64)(a1 + 44), v6, v4, a4);
    }
    v18 = v33;
  }
  if ( v18 )
  {
    if ( (_WORD)a2 )
      v19 = 0;
    else
      v19 = sub_1800588D4(&qword_180159600, a2 >> 16, 1LL);
    if ( (_WORD)v18 )
      v20 = 0;
    else
      v20 = sub_1800588D4(&qword_180159600, v18 >> 16, 1LL);
    if ( (dword_180158684 & 2) == 0 || v20 == v19 )
    {
      v21 = *(_QWORD *)(a3 + 24);
      v22 = (const void *)a2;
      if ( *(_QWORD *)a3 < v21 )
        v21 = *(_QWORD *)a3;
    }
    else
    {
      if ( !v20 || v19 )
      {
        v43 = *(_QWORD *)a3;
        if ( (_WORD)v18 )
          v44 = 0;
        else
          v44 = sub_1800588D4(&qword_180159600, v18 >> 16, 1LL);
        v23 = (void *)v18;
        if ( !v44 )
          v23 = (void *)(v18 + 16);
        v21 = v43 - 16;
        v22 = (const void *)a2;
        goto LABEL_19;
      }
      v41 = *(_QWORD *)a3;
      if ( (_WORD)a2 )
        v42 = 0;
      else
        v42 = sub_1800588D4(&qword_180159600, a2 >> 16, 1LL);
      v22 = (const void *)a2;
      if ( !v42 )
        v22 = (const void *)(a2 + 16);
      v21 = v41 - 16;
    }
    v23 = (void *)v18;
LABEL_19:
    memmove(v23, v22, v21);
    if ( *(_DWORD *)(a3 + 16) )
    {
      v24 = a2 + *(_QWORD *)a3 + 16;
      if ( (a4 & 0x10000000) == 0 )
        v24 = a2 + *(_QWORD *)a3;
      v25 = (unsigned __int8 *)((v24 + 15) & 0xFFFFFFFFFFFFFFF0uLL);
      v26 = v18 + *(_QWORD *)(a3 + 24) + 16;
      if ( (a4 & 0x10000000) == 0 )
        v26 = v18 + *(_QWORD *)(a3 + 24);
      memmove((void *)((v26 + 15) & 0xFFFFFFFFFFFFFFF0uLL), v25, 16 * (v25[3] + 1LL));
      _InterlockedOr(v49, 0);
      if ( (_WORD)v18 )
        v27 = 0;
      else
        v27 = sub_1800588D4(&qword_180159600, v18 >> 16, 1LL);
      if ( v27 )
        sub_180008F44((__int64)a1, v18, a4);
      else
        sub_18001F560((__int64)a1, v18);
    }
    v28 = 0;
    v29 = a1[10];
    if ( v29 )
      LOBYTE(v28) = v29 == LODWORD(NtCurrentTeb()->ClientId.UniqueThread);
    v30 = (a4 | a1[5]) & 0x11000000 | 1;
    if ( !v28 )
      v30 = (a4 | a1[5]) & 0x11000001;
    if ( (v30 & 0x1000000) != 0 )
      goto LABEL_89;
    if ( !a1[8] )
      goto LABEL_89;
    v45 = sub_18001F5E8((__int64)a1, a2, v30, 0LL);
    v46 = v45;
    if ( !v45 || (*(_BYTE *)(v45 + 2) & 0xF) == 0 )
      goto LABEL_89;
    if ( (dword_180158684 & 2) != 0 )
    {
      if ( (_WORD)a2 )
        v48 = 0;
      else
        v48 = sub_1800588D4(&qword_180159600, a2 >> 16, 1LL);
      v47 = a2;
      if ( !v48 )
        v47 = a2 + 16;
    }
    else
    {
      v47 = a2;
    }
    if ( (int)sub_180095A28(*(_BYTE *)(v46 + 2) & 0xF, (_DWORD)a1, v47, 3, v46 + 16) >= 0 )
    {
LABEL_89:
      if ( (a1[5] & 0x10000000) != 0 && sub_180023990(a1, a2, v30) == -1 )
      {
        sub_1800A4DFC(9, (_DWORD)a1, a2, 0, 0LL, 0LL);
      }
      else
      {
        if ( (_WORD)a2 )
          v31 = 0;
        else
          v31 = sub_1800588D4(&qword_180159600, a2 >> 16, 1LL);
        if ( v31 )
        {
          v34 = sub_180009038((__int64)a1, a2, v30) != 0;
          if ( (unsigned int)RtlGetCurrentServiceSessionId(v36, v35, v37, v38) )
            v40 = (__int64)NtCurrentPeb()->HotpatchInformation + 550;
          else
            v40 = 2147353472LL;
          if ( *(_BYTE *)v40 && (NtCurrentPeb()->TracingFlags & 1) != 0 && v34 )
            sub_1800FFB4C(a1, a2, 3LL, v39);
        }
        else
        {
          sub_180020404((__int64)a1, a2, v30);
        }
      }
    }
  }
  return v18;
}
