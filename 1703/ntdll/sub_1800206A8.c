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

__int64 __fastcall sub_1800206A8(_RTL_SRWLOCK *BaseAddress, char *Src, __int64 a3, unsigned int a4)
{
  ULONG_PTR v4; // rbp
  size_t v6; // r14
  _RTL_SRWLOCK *v10; // rbx
  int v11; // edx
  __int64 v12; // r13
  _RTL_SRWLOCK *Ptr; // r13
  char CurrentProcessorNumber; // al
  unsigned int Ptr_low; // ecx
  unsigned int v16; // eax
  void *v17; // rax
  __int64 v18; // rbx
  int v19; // ebp
  int v20; // eax
  size_t v21; // r8
  char *v22; // rdx
  void *v23; // rcx
  char *v24; // rdx
  unsigned __int8 *v25; // rdx
  __int64 v26; // rcx
  int v27; // eax
  int v28; // edx
  int v29; // r8d
  unsigned int v30; // ebp
  int v31; // eax
  void *v33; // rax
  BOOL v34; // ebp
  __int64 v35; // r9
  __int64 UserModeGlobalLogger; // rcx
  size_t v37; // rbp
  int v38; // eax
  size_t v39; // rbp
  int v40; // eax
  unsigned __int64 v41; // rax
  unsigned __int64 v42; // r14
  int v43; // r8d
  int v44; // eax
  signed __int32 v45[8]; // [rsp+0h] [rbp-58h] BYREF

  v4 = *(_QWORD *)(a3 + 32);
  v6 = *(_QWORD *)(a3 + 24);
  if ( v4 > 0x3FF0 )
    goto LABEL_40;
  v10 = BaseAddress + 36;
  v11 = *(_QWORD *)(a3 + 32);
  if ( (_DWORD)v6 != (_DWORD)v4 )
    v11 = v4 + 2;
  v12 = (unsigned __int8)byte_1801196F0[(unsigned __int64)(unsigned int)(v11 + 15) >> 4];
  if ( ((__int64)v10[v12 + 24].Ptr & 1) == 0 || sub_180009838((__int64)v10, v11, 1) )
  {
    Ptr = (_RTL_SRWLOCK *)v10[v12 + 24].Ptr;
    CurrentProcessorNumber = RtlGetCurrentProcessorNumber();
    Ptr_low = LOBYTE(v10[7].Ptr);
    v16 = CurrentProcessorNumber & 0x3F;
    if ( v16 >= Ptr_low )
    {
      if ( v16 == Ptr_low || (_BYTE)Ptr_low == 1 )
        v16 = 0;
      else
        v16 = *((unsigned __int8 *)v10[8].Ptr + v16 - Ptr_low - 1);
    }
    v17 = (void *)sub_18001FD40(
                    v10,
                    Ptr,
                    *((_RTL_SRWLOCK **)Ptr[13].Ptr + *((unsigned __int8 *)Ptr[12].Ptr + v16)),
                    v6,
                    a4);
    v18 = (__int64)v17;
    if ( v17 && (a4 & 2) != 0 )
      memset(v17, 0, (unsigned int)v6);
  }
  else
  {
    v18 = -1LL;
  }
  if ( v18 == -1 )
  {
LABEL_40:
    if ( v4 > 0x20000 )
    {
      if ( v4 <= 0x7F000 )
        v33 = sub_18001EFB4(BaseAddress, v6, v4, a4);
      else
        v33 = sub_180009164((char *)BaseAddress, v6, v4, a4);
    }
    else
    {
      v33 = sub_180009940(BaseAddress + 22, (unsigned int)v6, v4, a4);
    }
    v18 = (__int64)v33;
  }
  if ( v18 )
  {
    if ( (_WORD)Src )
      v19 = 0;
    else
      v19 = sub_1800588D4(&stru_180159600);
    if ( (_WORD)v18 )
      v20 = 0;
    else
      v20 = sub_1800588D4(&stru_180159600);
    if ( (dword_180158684 & 2) == 0 || v20 == v19 )
    {
      v21 = *(_QWORD *)(a3 + 24);
      v22 = Src;
      if ( *(_QWORD *)a3 < v21 )
        v21 = *(_QWORD *)a3;
    }
    else
    {
      if ( !v20 || v19 )
      {
        v39 = *(_QWORD *)a3;
        if ( (_WORD)v18 )
          v40 = 0;
        else
          v40 = sub_1800588D4(&stru_180159600);
        v23 = (void *)v18;
        if ( !v40 )
          v23 = (void *)(v18 + 16);
        v21 = v39 - 16;
        v22 = Src;
        goto LABEL_19;
      }
      v37 = *(_QWORD *)a3;
      if ( (_WORD)Src )
        v38 = 0;
      else
        v38 = sub_1800588D4(&stru_180159600);
      v22 = Src;
      if ( !v38 )
        v22 = Src + 16;
      v21 = v37 - 16;
    }
    v23 = (void *)v18;
LABEL_19:
    memmove(v23, v22, v21);
    if ( *(_DWORD *)(a3 + 16) )
    {
      v24 = &Src[*(_QWORD *)a3 + 16];
      if ( (a4 & 0x10000000) == 0 )
        v24 = &Src[*(_QWORD *)a3];
      v25 = (unsigned __int8 *)((unsigned __int64)(v24 + 15) & 0xFFFFFFFFFFFFFFF0uLL);
      v26 = v18 + *(_QWORD *)(a3 + 24) + 16;
      if ( (a4 & 0x10000000) == 0 )
        v26 = v18 + *(_QWORD *)(a3 + 24);
      memmove((void *)((v26 + 15) & 0xFFFFFFFFFFFFFFF0uLL), v25, 16 * (v25[3] + 1LL));
      _InterlockedOr(v45, 0);
      if ( (_WORD)v18 )
        v27 = 0;
      else
        v27 = sub_1800588D4(&stru_180159600);
      if ( v27 )
        sub_180008F44(BaseAddress, v18, a4);
      else
        sub_18001F560((__int64)BaseAddress, v18);
    }
    v28 = 0;
    v29 = (int)BaseAddress[5].Ptr;
    if ( v29 )
      LOBYTE(v28) = v29 == LODWORD(NtCurrentTeb()->ClientId.UniqueThread);
    v30 = (a4 | HIDWORD(BaseAddress[2].Ptr)) & 0x11000000 | 1;
    if ( !v28 )
      v30 = (a4 | HIDWORD(BaseAddress[2].Ptr)) & 0x11000001;
    if ( (v30 & 0x1000000) != 0 )
      goto LABEL_89;
    if ( !LODWORD(BaseAddress[4].Ptr) )
      goto LABEL_89;
    v41 = sub_18001F5E8(BaseAddress, (__int64)Src, v30, 0LL);
    v42 = v41;
    if ( !v41 || (*(_BYTE *)(v41 + 2) & 0xF) == 0 )
      goto LABEL_89;
    if ( (dword_180158684 & 2) != 0 )
    {
      if ( (_WORD)Src )
        v44 = 0;
      else
        v44 = sub_1800588D4(&stru_180159600);
      v43 = (int)Src;
      if ( !v44 )
        v43 = (_DWORD)Src + 16;
    }
    else
    {
      v43 = (int)Src;
    }
    if ( (int)sub_180095A28(*(_BYTE *)(v42 + 2) & 0xF, (_DWORD)BaseAddress, v43, 3, v42 + 16) >= 0 )
    {
LABEL_89:
      if ( (HIDWORD(BaseAddress[2].Ptr) & 0x10000000) != 0 && sub_180023990(BaseAddress, Src, v30) == -1 )
      {
        sub_1800A4DFC(9, (_DWORD)BaseAddress, (_DWORD)Src, 0, 0LL, 0LL);
      }
      else
      {
        if ( (_WORD)Src )
          v31 = 0;
        else
          v31 = sub_1800588D4(&stru_180159600);
        if ( v31 )
        {
          v34 = sub_180009038((__int64)BaseAddress, Src, v30) != 0;
          if ( RtlGetCurrentServiceSessionId() )
            UserModeGlobalLogger = (__int64)NtCurrentPeb()->SharedData->UserModeGlobalLogger;
          else
            UserModeGlobalLogger = 2147353472LL;
          if ( *(_BYTE *)UserModeGlobalLogger && (NtCurrentPeb()->TracingFlags & 1) != 0 && v34 )
            sub_1800FFB4C(BaseAddress, Src, 3LL, v35);
        }
        else
        {
          sub_180020404((__int64)BaseAddress, (unsigned __int64)Src, v30);
        }
      }
    }
  }
  return v18;
}
