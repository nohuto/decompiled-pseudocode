/*
 * XREFs of sub_180028830 @ 0x180028830
 * Callers:
 *     sub_180014980 @ 0x180014980 (sub_180014980.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180024AB0 (RtlGetCurrentServiceSessionId.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028EC0 (RtlAcquireSRWLockExclusive.c)
 *     sub_180077520 @ 0x180077520 (sub_180077520.c)
 *     sub_18008FDBC @ 0x18008FDBC (sub_18008FDBC.c)
 *     sub_18009005C @ 0x18009005C (sub_18009005C.c)
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 *     ZwSetInformationThread @ 0x1800A54A0 (ZwSetInformationThread.c)
 *     sub_180105430 @ 0x180105430 (sub_180105430.c)
 *     sub_180105AEC @ 0x180105AEC (sub_180105AEC.c)
 */

__int64 __fastcall sub_180028830(__int64 a1, __int64 a2, __int64 ***a3)
{
  BYTE Number; // bl
  unsigned int v6; // r9d
  unsigned int v7; // r14d
  WORD Group; // di
  int v9; // ebp
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // rax
  int v13; // eax
  __int64 v14; // rbx
  int v15; // eax
  unsigned int v16; // edi
  _QWORD *v17; // r12
  __int64 v18; // rcx
  __int64 **v19; // rbx
  volatile signed __int64 *v20; // rsi
  __int64 **v21; // rdi
  __int64 v22; // rax
  signed __int64 v23; // rax
  __int64 **v24; // rax
  int v25; // ecx
  __int64 v26; // rbx
  int v27; // eax
  unsigned int v28; // eax
  __int64 v30; // rbx
  _QWORD *v31; // rsi
  __int64 v32; // rax
  __int64 v33; // rdx
  signed __int64 v34; // rcx
  signed __int64 v35; // rdx
  signed __int64 v36; // rtt
  __int64 v37; // rcx
  unsigned __int16 v38; // si
  unsigned __int16 v39; // r12
  __int64 v40; // rcx
  __int64 v41; // rcx
  unsigned __int16 v42; // di
  unsigned __int16 v43; // si
  __int64 v44; // rcx
  int v45; // [rsp+30h] [rbp-88h] BYREF
  int v46; // [rsp+38h] [rbp-80h] BYREF
  __int64 v47; // [rsp+40h] [rbp-78h]
  __int64 ***v48; // [rsp+48h] [rbp-70h]
  __int64 v49; // [rsp+50h] [rbp-68h]
  _QWORD ThreadInformation[2]; // [rsp+58h] [rbp-60h] BYREF
  _QWORD v51[2]; // [rsp+68h] [rbp-50h] BYREF

  v48 = a3;
  Number = NtCurrentTeb()->CurrentIdealProcessor.Number;
  v6 = dword_18015BFF0;
  v7 = dword_18015BFF0;
  Group = NtCurrentTeb()->CurrentIdealProcessor.Group;
  if ( *(_DWORD *)(a1 + 424) != MEMORY[0x7FFE03C0] )
  {
    sub_180105430(a1);
    v6 = dword_18015BFF0;
  }
  v9 = 0;
  v10 = 0LL;
  if ( v6 )
  {
    v11 = *(_QWORD *)(a1 + 48);
    while ( 1 )
    {
      if ( *(_WORD *)(v11 + 16LL * (unsigned int)v10 + 8) == Group )
      {
        v12 = *(_QWORD *)(v11 + 16LL * (unsigned int)v10);
        if ( _bittest64(&v12, Number) )
          break;
      }
      v10 = (unsigned int)(v10 + 1);
      if ( (unsigned int)v10 >= v6 )
        goto LABEL_8;
    }
    v7 = v10;
  }
LABEL_8:
  if ( v7 >= v6 )
    v7 = 0;
  v13 = Number;
  v14 = *(unsigned int *)(a2 + 344);
  v45 = v13;
  v15 = *(_DWORD *)(a1 + 428);
  if ( v7 == (_DWORD)v14 )
  {
    if ( v15 == -1 && !*(_BYTE *)(a2 + 352) )
    {
      *(_BYTE *)(a2 + 352) = 1;
      _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(a1 + 40) + 4LL * v7));
    }
  }
  else
  {
    if ( v15 == -1 )
    {
      if ( *(_BYTE *)(a2 + 352) )
        _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(a1 + 40) + 4 * v14));
      else
        *(_BYTE *)(a2 + 352) = 1;
      _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(a1 + 40) + 4LL * v7));
    }
    *(_DWORD *)(a2 + 344) = v7;
    v41 = *(_QWORD *)(a1 + 48);
    v42 = *(_WORD *)(v41 + 16LL * v7 + 8);
    v43 = *(_WORD *)(v41 + 16 * v14 + 8);
    if ( RtlGetCurrentServiceSessionId() )
      v44 = (__int64)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[3];
    else
      v44 = 2147353478LL;
    if ( *(_BYTE *)v44 )
      sub_180105AEC(a1, v14, v7, v43, v42);
    if ( v43 != v42 )
    {
      ThreadInformation[0] = 0LL;
      ThreadInformation[1] = v42;
      ZwSetInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadGroupInformation, ThreadInformation, 0x10u);
      ZwSetInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadIdealProcessor, &v45, 4u);
    }
  }
  v16 = v7;
  if ( *(_DWORD *)(a1 + 428) != -1 || *(_DWORD *)(a2 + 348) < 0x10u || (unsigned int)sub_18009005C(a1, v10) )
  {
    v17 = (_QWORD *)(a1 + 16);
    v47 = 0LL;
    v18 = 24LL * v7;
    v49 = v18;
    while ( 1 )
    {
      v19 = (__int64 **)(v18 + *v17);
      v20 = (volatile signed __int64 *)(v19 + 2);
      RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)v19 + 2);
      v21 = (__int64 **)*v19;
      v22 = **v19;
      if ( (__int64 **)(*v19)[1] != v19 || *(__int64 ***)(v22 + 8) != v21 )
        __fastfail(3u);
      *v19 = (__int64 *)v22;
      *(_QWORD *)(v22 + 8) = v19;
      v23 = _InterlockedCompareExchange64(v20, 0LL, 1LL);
      if ( v23 != 1 )
      {
        do
        {
          v33 = 3LL;
          v34 = v23 & 6;
          if ( v34 != 2 )
            v33 = -1LL;
          v35 = v23 + v33;
          v36 = v23;
          v23 = _InterlockedCompareExchange64(v20, v35, v23);
        }
        while ( v36 != v23 );
        if ( v34 == 2 )
          sub_180077520(v19 + 2, v35, 0LL);
      }
      if ( v21 != v19 )
        break;
      ++v17;
      v18 = v49;
      if ( ++v47 > 2 )
      {
        v16 = v7;
        goto LABEL_32;
      }
    }
    v24 = v21 - 2;
    v16 = v7;
LABEL_21:
    *v48 = v24;
    v25 = *((unsigned __int8 *)v24 + 12);
    v26 = *(unsigned int *)(a2 + 344);
    v27 = *(_DWORD *)(a1 + 428);
    v46 = v25;
    if ( v16 == (_DWORD)v26 )
    {
      if ( v27 == -1 && !*(_BYTE *)(a2 + 352) )
      {
        *(_BYTE *)(a2 + 352) = 1;
        _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(a1 + 40) + 4LL * v16));
      }
    }
    else
    {
      if ( v27 == -1 )
      {
        if ( *(_BYTE *)(a2 + 352) )
          _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(a1 + 40) + 4 * v26));
        else
          *(_BYTE *)(a2 + 352) = 1;
        _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(a1 + 40) + 4LL * v16));
      }
      *(_DWORD *)(a2 + 344) = v16;
      v37 = *(_QWORD *)(a1 + 48);
      v38 = *(_WORD *)(v37 + 16LL * v16 + 8);
      v39 = *(_WORD *)(v37 + 16 * v26 + 8);
      if ( RtlGetCurrentServiceSessionId() )
        v40 = (__int64)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[3];
      else
        v40 = 2147353478LL;
      if ( *(_BYTE *)v40 )
        sub_180105AEC(a1, v26, v16, v39, v38);
      if ( v39 != v38 )
      {
        v51[0] = 0LL;
        v51[1] = v38;
        ZwSetInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadGroupInformation, v51, 0x10u);
        ZwSetInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadIdealProcessor, &v46, 4u);
      }
    }
    if ( v16 == v7 )
    {
      v28 = *(_DWORD *)(a2 + 348);
      if ( v28 < 0x10 )
        v9 = v28 + 1;
      else
        v9 = 16;
    }
    *(_DWORD *)(a2 + 348) = v9;
    return 1LL;
  }
  else
  {
LABEL_32:
    while ( !*(_BYTE *)(a1 + 377) )
    {
      v30 = 0LL;
      v31 = (_QWORD *)(a1 + 16);
      while ( 1 )
      {
        v32 = sub_18008FDBC(*v31 + 24LL * v16);
        if ( v32 )
        {
          v24 = (__int64 **)(v32 - 16);
          goto LABEL_21;
        }
        if ( ++v16 >= dword_18015BFF0 )
          v16 = 0;
        if ( v16 == v7 )
        {
          ++v30;
          ++v31;
          if ( v30 > 2 )
            break;
        }
      }
    }
    return 0LL;
  }
}
