/*
 * XREFs of NtUserMagSetContextInformation @ 0x1C01E93F0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     memset @ 0x1C0145A00 (memset.c)
 *     MagSetLensContextInformation @ 0x1C01A89BC (MagSetLensContextInformation.c)
 */

__int64 __fastcall NtUserMagSetContextInformation(__int64 a1, int a2, ULONG64 a3, unsigned int a4)
{
  NTSTATUS v8; // ebx
  __int64 v9; // r13
  ULONG64 i; // rdx
  ULONG64 v11; // r8
  ULONG64 v12; // r9
  __int64 v13; // r12
  __m128i v14; // xmm0
  unsigned __int32 v15; // r14d
  unsigned __int64 v16; // rax
  __int64 v17; // rcx
  __m128i *v18; // rax
  __int64 j; // rcx
  ULONG64 v20; // rcx
  unsigned int v21; // eax
  unsigned int v22; // ecx
  int v23; // eax
  unsigned int v24; // eax
  __m128i *v25; // rax
  __int64 ThreadWin32Thread; // rax
  ULONG v27; // eax
  __int64 v28; // rdx
  __m128i *v29; // rcx
  __m128i *Buf1; // [rsp+48h] [rbp-240h]
  __m128i *v32; // [rsp+68h] [rbp-220h]
  __m128i *v33; // [rsp+70h] [rbp-218h]
  __int64 v34; // [rsp+C0h] [rbp-1C8h]
  __int32 v35; // [rsp+E8h] [rbp-1A0h]
  __m128i v36; // [rsp+100h] [rbp-188h]
  __int64 v37; // [rsp+110h] [rbp-178h]
  __m128i v38; // [rsp+128h] [rbp-160h]
  __m128i v39; // [rsp+138h] [rbp-150h]
  __m128i v40; // [rsp+148h] [rbp-140h]
  __m128i v41; // [rsp+158h] [rbp-130h]
  __m128i v42; // [rsp+168h] [rbp-120h]
  __int32 v43; // [rsp+178h] [rbp-110h]
  __m128i v44[7]; // [rsp+1C0h] [rbp-C8h] BYREF

  v8 = -1073741811;
  Buf1 = 0LL;
  memset(v44, 0, 0x68uLL);
  v33 = 0LL;
  v32 = 0LL;
  v9 = 1LL;
  EnterCrit(0LL, 1LL);
  if ( a1 == -3 )
  {
    v13 = -1LL;
  }
  else if ( a1 )
  {
    v13 = ValidateHwnd(a1);
    if ( !v13 )
      goto LABEL_117;
  }
  else
  {
    v13 = 0LL;
  }
  if ( a2 < 11 )
  {
    if ( a2 == 4 )
    {
      if ( *(_QWORD *)(gptiCurrent + 432LL) != grpdeskRitInput )
      {
        UserSetLastError(5LL, i);
        goto LABEL_116;
      }
      if ( gbEnforceUIPI && *(int *)(*(_QWORD *)(gptiCurrent + 400LL) + 12LL) >= 0 )
      {
        UserSetLastError(5LL, i);
        EtwTraceUIPISystemError(*(_QWORD *)(gptiCurrent + 400LL), 0LL, 7LL);
        v8 = -1073741790;
        goto LABEL_117;
      }
    }
    if ( a2 > 6 )
    {
      if ( a2 == 7 )
      {
        if ( !a3 )
          goto LABEL_116;
        if ( a4 < 0x10 )
        {
          v8 = -1073741306;
          goto LABEL_116;
        }
        v20 = a3;
        i = a3 + 40;
        if ( a3 + 40 < a3 || i > MmUserProbeAddress )
          v20 = MmUserProbeAddress;
        v36 = *(__m128i *)(v20 + 16);
        v37 = *(_QWORD *)(v20 + 32);
        v44[0] = *(__m128i *)v20;
        v44[1] = v36;
        v44[2].m128i_i64[0] = v37;
        v21 = _mm_cvtsi128_si32(v44[0]);
        if ( v21 > 6 )
        {
          v8 = -1073741306;
          goto LABEL_116;
        }
        v22 = 24 * v21;
        i = 0xFFFFFFFFLL;
        if ( 24 * (unsigned __int64)v21 > 0xFFFFFFFF )
        {
          v22 = -1;
          v23 = -2147024362;
        }
        else
        {
          v23 = 0;
        }
        if ( v23 >= 0 )
        {
          v24 = v22 + 16;
          if ( v22 + 16 >= v22 )
            i = v24;
          if ( v24 >= v22 )
          {
            v25 = (__m128i *)Win32AllocPool((unsigned int)i, 1735226197LL);
            Buf1 = v25;
            if ( !v25 )
            {
              v8 = -1073741801;
              goto LABEL_116;
            }
            v32 = v25;
            *v25 = v44[0];
            for ( i = 0LL; (unsigned int)i < v25->m128i_i32[0]; i = (unsigned int)(i + 1) )
            {
              v12 = 3 * i;
              v11 = a3 + 16 + 24 * i;
              if ( v11 + 24 < v11 || v11 + 24 > MmUserProbeAddress )
                v11 = MmUserProbeAddress;
              v34 = *(_QWORD *)(v11 + 16);
              *(__m128i *)((char *)v25 + 24 * i + 16) = *(__m128i *)v11;
              v25[2].m128i_i64[3 * i] = v34;
            }
            goto LABEL_115;
          }
        }
      }
      else if ( a2 != 8 )
      {
        if ( a2 == 9 )
        {
          if ( !a3 )
            goto LABEL_116;
          if ( a4 < 4 )
          {
            v8 = -1073741306;
            goto LABEL_116;
          }
        }
        else
        {
          if ( !a3 )
            goto LABEL_116;
          if ( a4 < 4 )
          {
            v8 = -1073741306;
            goto LABEL_116;
          }
        }
        if ( a3 + 4 < a3 || a3 + 4 > MmUserProbeAddress )
          a3 = MmUserProbeAddress;
        v44[0].m128i_i32[0] = *(_DWORD *)a3;
        goto LABEL_51;
      }
    }
    else
    {
      if ( a2 != 6 )
      {
        if ( a2 < 0 )
        {
LABEL_115:
          ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), i, v11, v12);
          v8 = MagSetLensContextInformation(*(_QWORD **)&gMagnContext, ThreadWin32Thread, v13, 0, a2, Buf1);
          goto LABEL_116;
        }
        if ( a2 <= 1 )
        {
          if ( a3 )
            goto LABEL_116;
          Buf1 = 0LL;
          goto LABEL_115;
        }
        switch ( a2 )
        {
          case 2:
            if ( !a3 )
              goto LABEL_116;
            if ( a4 < 0x10 )
            {
              v8 = -1073741306;
              goto LABEL_116;
            }
            if ( a3 + 16 < a3 || a3 + 16 > MmUserProbeAddress )
              a3 = MmUserProbeAddress;
            v14 = *(__m128i *)a3;
            break;
          case 3:
            if ( !a3 )
              goto LABEL_116;
            if ( a4 < 0x20 )
            {
              v8 = -1073741306;
              goto LABEL_116;
            }
            if ( a3 + 32 < a3 || a3 + 32 > MmUserProbeAddress )
              a3 = MmUserProbeAddress;
            v14 = *(__m128i *)a3;
            v44[1] = *(__m128i *)(a3 + 16);
            break;
          case 4:
            if ( !a3 )
              goto LABEL_116;
            if ( a4 < 0x24 )
            {
              v8 = -1073741306;
              goto LABEL_116;
            }
            if ( a3 + 36 < a3 || a3 + 36 > MmUserProbeAddress )
              a3 = MmUserProbeAddress;
            v14 = *(__m128i *)a3;
            v35 = *(_DWORD *)(a3 + 32);
            v44[1] = *(__m128i *)(a3 + 16);
            v44[2].m128i_i32[0] = v35;
            break;
          default:
            if ( !a3 )
              goto LABEL_116;
            if ( a4 < 0x64 )
            {
              v8 = -1073741306;
              goto LABEL_116;
            }
            if ( a3 + 100 < a3 || a3 + 100 > MmUserProbeAddress )
              a3 = MmUserProbeAddress;
            v38 = *(__m128i *)(a3 + 16);
            v39 = *(__m128i *)(a3 + 32);
            v40 = *(__m128i *)(a3 + 48);
            v41 = *(__m128i *)(a3 + 64);
            v42 = *(__m128i *)(a3 + 80);
            v43 = *(_DWORD *)(a3 + 96);
            v44[0] = *(__m128i *)a3;
            v44[1] = v38;
            v44[2] = v39;
            v44[3] = v40;
            v44[4] = v41;
            v44[5] = v42;
            v44[6].m128i_i32[0] = v43;
            goto LABEL_51;
        }
        v44[0] = v14;
LABEL_51:
        Buf1 = v44;
        goto LABEL_115;
      }
      if ( !a3 )
        goto LABEL_116;
      if ( a4 < 0x10 )
      {
        v8 = -1073741306;
        goto LABEL_116;
      }
      i = a3;
      if ( a3 + 16 < a3 || a3 + 16 > MmUserProbeAddress )
        i = MmUserProbeAddress;
      v44[0] = *(__m128i *)i;
      if ( v44[0].m128i_i32[1] > 0x19u )
      {
        v8 = -1073741306;
        goto LABEL_116;
      }
      if ( v44[0].m128i_i32[0] > 0x19u )
      {
        v8 = -1073741306;
        goto LABEL_116;
      }
      v15 = v44[0].m128i_i32[1] + v44[0].m128i_i32[0];
      if ( (unsigned int)(v44[0].m128i_i32[1] + v44[0].m128i_i32[0]) >= v44[0].m128i_i32[0] )
      {
        if ( v15 > 0x19 )
        {
          v8 = -1073741306;
          goto LABEL_116;
        }
        v16 = 8LL * v15;
        i = 0xFFFFFFFFLL;
        if ( v16 <= 0xFFFFFFFF )
        {
          v17 = (unsigned int)(v16 + 8);
          if ( (unsigned int)v17 >= (unsigned int)v16 )
          {
            v18 = (__m128i *)Win32AllocPool(v17, 1735226197LL);
            i = (ULONG64)v18;
            Buf1 = v18;
            if ( !v18 )
            {
              v8 = -1073741801;
              goto LABEL_116;
            }
            v33 = v18;
            v18->m128i_i64[0] = v44[0].m128i_i64[0];
            for ( j = 0LL; (unsigned int)j < v15; j = (unsigned int)(j + 1) )
            {
              v11 = a3 + 8 + 8 * j;
              v12 = v11 + 8;
              if ( v11 + 8 < v11 || v12 > MmUserProbeAddress )
                v11 = MmUserProbeAddress;
              v18->m128i_i64[j + 1] = *(_QWORD *)v11;
            }
            goto LABEL_115;
          }
        }
      }
    }
LABEL_116:
    if ( v8 >= 0 )
      goto LABEL_118;
    goto LABEL_117;
  }
  v8 = -1073741821;
LABEL_117:
  v27 = RtlNtStatusToDosError(v8);
  UserSetLastError(v27, v28);
  v9 = 0LL;
LABEL_118:
  if ( v32 )
    Win32FreePool(v32, i, v11);
  v29 = v33;
  if ( v33 )
    Win32FreePool(v33, i, v11);
  UserSessionSwitchLeaveCrit(v29, i);
  return v9;
}
