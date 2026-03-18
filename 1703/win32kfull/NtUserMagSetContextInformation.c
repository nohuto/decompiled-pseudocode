/*
 * XREFs of NtUserMagSetContextInformation @ 0x1C01DD1F0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     W32GetThreadWin32Thread @ 0x1C0054B98 (W32GetThreadWin32Thread.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     memset @ 0x1C0140500 (memset.c)
 *     MagSetLensContextInformation @ 0x1C01EC5F4 (MagSetLensContextInformation.c)
 */

__int64 __fastcall NtUserMagSetContextInformation(__int64 a1, int a2, unsigned __int64 a3, unsigned int a4)
{
  NTSTATUS v8; // ebx
  __int64 v9; // r8
  __int64 v10; // r9
  unsigned __int64 v11; // rdx
  unsigned int v12; // edi
  __m128i *v13; // rcx
  unsigned int v14; // eax
  unsigned int v15; // ecx
  int v16; // eax
  __m128i *v17; // rax
  __int64 j; // rdx
  unsigned __int64 v19; // r8
  unsigned __int32 v20; // r12d
  unsigned __int64 v21; // rax
  __m128i *v22; // rax
  __int64 i; // rcx
  __int64 *v24; // r8
  int ThreadWin32Thread; // eax
  ULONG v26; // eax
  __m128i *v27; // rcx
  __m128i *Buf1; // [rsp+48h] [rbp-240h]
  int v30[2]; // [rsp+70h] [rbp-218h]
  __m128i *v31; // [rsp+78h] [rbp-210h]
  __m128i *v32; // [rsp+80h] [rbp-208h]
  __int64 v33; // [rsp+C8h] [rbp-1C0h]
  __m128i v34; // [rsp+E0h] [rbp-1A8h]
  __int32 v35; // [rsp+F0h] [rbp-198h]
  __m128i v36; // [rsp+108h] [rbp-180h]
  __int64 v37; // [rsp+118h] [rbp-170h]
  __m128i v38; // [rsp+130h] [rbp-158h]
  __m128i v39; // [rsp+140h] [rbp-148h]
  __m128i v40; // [rsp+150h] [rbp-138h]
  __m128i v41; // [rsp+160h] [rbp-128h]
  __m128i v42; // [rsp+170h] [rbp-118h]
  __int32 v43; // [rsp+180h] [rbp-108h]
  __m128i v44; // [rsp+1B8h] [rbp-D0h]
  __m128i v45[7]; // [rsp+1D0h] [rbp-B8h] BYREF

  v8 = -1073741811;
  Buf1 = 0LL;
  memset(v45, 0, 0x68uLL);
  v32 = 0LL;
  v31 = 0LL;
  EnterCrit(0LL, 1LL);
  if ( a1 == -3 )
  {
    v30[0] = -1;
  }
  else if ( a1 )
  {
    *(_QWORD *)v30 = ValidateHwnd(a1);
    if ( !*(_QWORD *)v30 )
      goto LABEL_122;
  }
  else
  {
    v30[0] = 0;
  }
  if ( a2 < 10 )
  {
    v11 = 4LL;
    if ( a2 == 4 )
    {
      if ( *(_QWORD *)(gptiCurrent + 408LL) != grpdeskRitInput )
      {
        UserSetLastError(5LL);
LABEL_12:
        v12 = 1;
        goto LABEL_121;
      }
      if ( gbEnforceUIPI && *(int *)(*(_QWORD *)(gptiCurrent + 376LL) + 12LL) >= 0 )
      {
        UserSetLastError(5LL);
        EtwTraceUIPISystemError(*(_QWORD *)(gptiCurrent + 376LL), 0LL, 7LL);
        v8 = -1073741790;
        goto LABEL_122;
      }
    }
    if ( a2 > 5 )
    {
      switch ( a2 )
      {
        case 6:
          if ( a3 )
          {
            if ( a4 >= 0x10 )
            {
              v11 = a3;
              if ( a3 + 16 < a3 || a3 + 16 > W32UserProbeAddress )
                v11 = W32UserProbeAddress;
              v45[0] = *(__m128i *)v11;
              if ( v45[0].m128i_i32[1] <= 0x19u )
              {
                if ( v45[0].m128i_i32[0] <= 0x19u )
                {
                  v20 = v45[0].m128i_i32[1] + v45[0].m128i_i32[0];
                  if ( (unsigned int)(v45[0].m128i_i32[1] + v45[0].m128i_i32[0]) < v45[0].m128i_i32[0] )
                  {
                    v12 = 1;
                  }
                  else if ( v20 <= 0x19 )
                  {
                    v21 = 8LL * v20;
                    if ( v21 > 0xFFFFFFFF )
                    {
                      v12 = 1;
                    }
                    else if ( (int)v21 + 8 >= (unsigned int)v21 )
                    {
                      v22 = (__m128i *)Win32AllocPool((unsigned int)(v21 + 8), 1735226197LL);
                      v11 = (unsigned __int64)v22;
                      Buf1 = v22;
                      if ( v22 )
                      {
                        v32 = v22;
                        v22->m128i_i64[0] = v45[0].m128i_i64[0];
                        for ( i = 0LL; (unsigned int)i < v20; i = (unsigned int)(i + 1) )
                        {
                          v24 = (__int64 *)(a3 + 8 + 8 * i);
                          if ( v24 + 1 < v24 || (unsigned __int64)(v24 + 1) > W32UserProbeAddress )
                            v24 = (__int64 *)W32UserProbeAddress;
                          v22->m128i_i64[i + 1] = *v24;
                        }
                        goto LABEL_118;
                      }
                      v8 = -1073741801;
                      v12 = 1;
                    }
                    else
                    {
                      v12 = 1;
                    }
                  }
                  else
                  {
                    v8 = -1073741306;
                    v12 = 1;
                  }
                }
                else
                {
                  v8 = -1073741306;
                  v12 = 1;
                }
              }
              else
              {
                v8 = -1073741306;
                v12 = 1;
              }
            }
            else
            {
              v8 = -1073741306;
              v12 = 1;
            }
          }
          else
          {
            v12 = 1;
          }
          break;
        case 7:
          if ( a3 )
          {
            if ( a4 >= 0x10 )
            {
              v13 = (__m128i *)a3;
              v11 = a3 + 40;
              if ( a3 + 40 < a3 || v11 > W32UserProbeAddress )
                v13 = (__m128i *)W32UserProbeAddress;
              v36 = v13[1];
              v37 = v13[2].m128i_i64[0];
              v45[0] = *v13;
              v45[1] = v36;
              v45[2].m128i_i64[0] = v37;
              v14 = _mm_cvtsi128_si32(v45[0]);
              if ( v14 <= 6 )
              {
                v15 = 24 * v14;
                if ( 24 * (unsigned __int64)v14 > 0xFFFFFFFF )
                {
                  v15 = -1;
                  v16 = -2147024362;
                }
                else
                {
                  v16 = 0;
                }
                if ( v16 >= 0 )
                {
                  if ( v15 + 16 >= v15 )
                  {
                    v17 = (__m128i *)Win32AllocPool(v15 + 16, 1735226197LL);
                    Buf1 = v17;
                    if ( v17 )
                    {
                      v31 = v17;
                      *v17 = v45[0];
                      for ( j = 0LL; (unsigned int)j < v17->m128i_i32[0]; j = (unsigned int)(j + 1) )
                      {
                        v19 = a3 + 16 + 24 * j;
                        if ( v19 + 24 < v19 || v19 + 24 > W32UserProbeAddress )
                          v19 = W32UserProbeAddress;
                        v33 = *(_QWORD *)(v19 + 16);
                        *(__m128i *)((char *)v17 + 24 * j + 16) = *(__m128i *)v19;
                        v17[2].m128i_i64[3 * j] = v33;
                      }
                      goto LABEL_118;
                    }
                    v8 = -1073741801;
                    v12 = 1;
                  }
                  else
                  {
                    v12 = 1;
                  }
                }
                else
                {
                  v12 = 1;
                }
              }
              else
              {
                v8 = -1073741306;
                v12 = 1;
              }
            }
            else
            {
              v8 = -1073741306;
              v12 = 1;
            }
          }
          else
          {
            v12 = 1;
          }
          break;
        case 8:
          v12 = 1;
          break;
        default:
          if ( a3 )
          {
            if ( a4 >= 4 )
            {
              if ( a3 + 4 < a3 || a3 + 4 > W32UserProbeAddress )
                a3 = W32UserProbeAddress;
              v45[0].m128i_i32[0] = *(_DWORD *)a3;
              Buf1 = v45;
              goto LABEL_118;
            }
            v8 = -1073741306;
            v12 = 1;
          }
          else
          {
            v12 = 1;
          }
          break;
      }
    }
    else if ( a2 == 5 )
    {
      if ( a3 )
      {
        if ( a4 >= 0x64 )
        {
          if ( a3 + 100 < a3 || a3 + 100 > W32UserProbeAddress )
            a3 = W32UserProbeAddress;
          v38 = *(__m128i *)(a3 + 16);
          v39 = *(__m128i *)(a3 + 32);
          v40 = *(__m128i *)(a3 + 48);
          v41 = *(__m128i *)(a3 + 64);
          v42 = *(__m128i *)(a3 + 80);
          v43 = *(_DWORD *)(a3 + 96);
          v45[0] = *(__m128i *)a3;
          v45[1] = v38;
          v45[2] = v39;
          v45[3] = v40;
          v45[4] = v41;
          v45[5] = v42;
          v45[6].m128i_i32[0] = v43;
          Buf1 = v45;
          goto LABEL_118;
        }
        v8 = -1073741306;
        v12 = 1;
      }
      else
      {
        v12 = 1;
      }
    }
    else
    {
      if ( a2 < 0 )
        goto LABEL_118;
      if ( a2 <= 1 )
      {
        if ( !a3 )
        {
          Buf1 = 0LL;
          goto LABEL_118;
        }
        v12 = 1;
      }
      else if ( a2 == 2 )
      {
        if ( a3 )
        {
          if ( a4 >= 0x10 )
          {
            if ( a3 + 16 < a3 || a3 + 16 > W32UserProbeAddress )
              a3 = W32UserProbeAddress;
            v45[0] = *(__m128i *)a3;
            Buf1 = v45;
            goto LABEL_118;
          }
          v8 = -1073741306;
          v12 = 1;
        }
        else
        {
          v12 = 1;
        }
      }
      else
      {
        if ( a2 != 3 )
        {
          if ( !a3 )
          {
            v12 = 1;
            goto LABEL_121;
          }
          if ( a4 < 0x24 )
          {
            v8 = -1073741306;
            v12 = 1;
            goto LABEL_121;
          }
          if ( a3 + 36 < a3 || a3 + 36 > W32UserProbeAddress )
            a3 = W32UserProbeAddress;
          v34 = *(__m128i *)(a3 + 16);
          v35 = *(_DWORD *)(a3 + 32);
          v45[0] = *(__m128i *)a3;
          v45[1] = v34;
          v45[2].m128i_i32[0] = v35;
          Buf1 = v45;
LABEL_118:
          ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
          v8 = MagSetLensContextInformation(gMagnContext, ThreadWin32Thread, v30[0], 0, a2, Buf1);
          goto LABEL_12;
        }
        if ( a3 )
        {
          if ( a4 >= 0x20 )
          {
            if ( a3 + 32 < a3 || a3 + 32 > W32UserProbeAddress )
              a3 = W32UserProbeAddress;
            v44 = *(__m128i *)(a3 + 16);
            v45[0] = *(__m128i *)a3;
            v45[1] = v44;
            Buf1 = v45;
            goto LABEL_118;
          }
          v8 = -1073741306;
          v12 = 1;
        }
        else
        {
          v12 = 1;
        }
      }
    }
LABEL_121:
    if ( v8 >= 0 )
      goto LABEL_123;
    goto LABEL_122;
  }
  v8 = -1073741821;
LABEL_122:
  v12 = 0;
  v26 = RtlNtStatusToDosError(v8);
  UserSetLastError(v26);
LABEL_123:
  if ( v31 )
    Win32FreePool(v31);
  v27 = v32;
  if ( v32 )
    Win32FreePool(v32);
  UserSessionSwitchLeaveCrit(v27, v11, v9, v10);
  return v12;
}
