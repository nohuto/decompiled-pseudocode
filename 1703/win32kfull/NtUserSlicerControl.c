/*
 * XREFs of NtUserSlicerControl @ 0x1C01E0780
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     W32GetThreadWin32Thread @ 0x1C0054B98 (W32GetThreadWin32Thread.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     memmove @ 0x1C01401C0 (memmove.c)
 *     memset @ 0x1C0140500 (memset.c)
 *     MagSlicerControl @ 0x1C01ED248 (MagSlicerControl.c)
 */

__int64 __fastcall NtUserSlicerControl(__int64 a1, int a2, __m128i *a3, unsigned int a4)
{
  NTSTATUS v8; // edi
  unsigned int v9; // r12d
  __int64 v10; // rax
  __m128i *v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  int v14; // r13d
  __m128i *v15; // rcx
  __m128i *v16; // rcx
  __m128i *v17; // rcx
  unsigned int v18; // eax
  unsigned __int64 v19; // rcx
  int v20; // eax
  unsigned int v21; // ebx
  __m128i *v22; // rax
  unsigned __int32 i; // edx
  __int64 v24; // r9
  __m128i *v25; // r8
  __m128i v26; // xmm1
  int ThreadWin32Thread; // eax
  int v28; // eax
  ULONG v29; // eax
  __m128i *v30; // rcx
  unsigned int Size; // [rsp+34h] [rbp-154h]
  __m128i *Src; // [rsp+40h] [rbp-148h]
  __m128i *v34; // [rsp+58h] [rbp-130h]
  __int64 v35; // [rsp+98h] [rbp-F0h]
  __m128i v36; // [rsp+B0h] [rbp-D8h]
  __m128i v37; // [rsp+F0h] [rbp-98h]
  __m128i v38; // [rsp+100h] [rbp-88h]
  __m128i v39[3]; // [rsp+110h] [rbp-78h] BYREF

  v8 = -1073741811;
  Src = 0LL;
  Size = 0;
  memset(v39, 0, sizeof(v39));
  v34 = 0LL;
  v9 = 1;
  EnterCrit(0LL, 1LL);
  v10 = ValidateHwnd(a1);
  v14 = v10;
  if ( v10 && a2 < 5 )
  {
    if ( a2 >= 0 )
    {
      if ( a2 <= 1 )
      {
        if ( a3 )
          goto LABEL_52;
        if ( a4 )
        {
          v8 = -1073741306;
          goto LABEL_52;
        }
        Src = 0LL;
        Size = 0;
      }
      else if ( a2 == 2 )
      {
        if ( !a3 )
          goto LABEL_52;
        if ( a4 < 0x10 )
        {
          v8 = -1073741306;
          goto LABEL_52;
        }
        v17 = a3;
        v11 = a3 + 3;
        if ( &a3[3] < a3 || (unsigned __int64)v11 > W32UserProbeAddress )
          v17 = (__m128i *)W32UserProbeAddress;
        v37 = v17[1];
        v38 = v17[2];
        v39[0] = *v17;
        v39[1] = v37;
        v39[2] = v38;
        v18 = _mm_cvtsi128_si32(v39[0]);
        if ( v18 > 6 )
        {
          v8 = -1073741306;
          goto LABEL_52;
        }
        v19 = 32LL * v18;
        if ( v19 > 0xFFFFFFFF )
        {
          LODWORD(v19) = -1;
          v20 = -2147024362;
        }
        else
        {
          v20 = 0;
        }
        if ( v20 < 0 || (int)v19 + 16 < (unsigned int)v19 )
        {
LABEL_52:
          if ( v8 >= 0 )
            goto LABEL_54;
          goto LABEL_53;
        }
        v21 = v19 + 16;
        v22 = (__m128i *)Win32AllocPool((unsigned int)(v19 + 16), 1735226197LL);
        Src = v22;
        if ( !v22 )
        {
          v8 = -1073741801;
          goto LABEL_52;
        }
        v34 = v22;
        *v22 = v39[0];
        for ( i = 0; i < v22->m128i_i32[0]; ++i )
        {
          v24 = 2LL * i;
          v25 = &a3[v24 + 1];
          if ( &v25[2] < v25 || (unsigned __int64)&v25[2] > W32UserProbeAddress )
            v25 = (__m128i *)W32UserProbeAddress;
          v26 = v25[1];
          v22[v24 + 1] = *v25;
          v22[v24 + 2] = v26;
        }
        Size = v21;
      }
      else if ( a2 == 3 )
      {
        if ( !a3 )
          goto LABEL_52;
        if ( a4 < 0x18 )
        {
          v8 = -1073741306;
          goto LABEL_52;
        }
        v16 = a3;
        if ( &a3[1].m128i_u64[1] < (unsigned __int64 *)a3 || (unsigned __int64)&a3[1].m128i_u64[1] > W32UserProbeAddress )
          v16 = (__m128i *)W32UserProbeAddress;
        v35 = v16[1].m128i_i64[0];
        v39[0] = *v16;
        v39[1].m128i_i64[0] = v35;
        Src = v39;
        Size = 24;
      }
      else
      {
        if ( !a3 )
          goto LABEL_52;
        if ( a4 < 0x20 )
        {
          v8 = -1073741306;
          goto LABEL_52;
        }
        v15 = a3;
        if ( &a3[2] < a3 || (unsigned __int64)&a3[2] > W32UserProbeAddress )
          v15 = (__m128i *)W32UserProbeAddress;
        v36 = v15[1];
        v39[0] = *v15;
        v39[1] = v36;
        Src = v39;
        Size = 32;
      }
    }
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
    v28 = MagSlicerControl(gMagnContext, ThreadWin32Thread, v14, (__int64)Src);
    v8 = v28;
    if ( a2 == 4 && v28 >= 0 )
    {
      if ( (unsigned __int64)a3 >= W32UserProbeAddress )
        a3 = (__m128i *)W32UserProbeAddress;
      memmove(a3, Src, Size);
    }
    goto LABEL_52;
  }
LABEL_53:
  v9 = 0;
  v29 = RtlNtStatusToDosError(v8);
  UserSetLastError(v29);
LABEL_54:
  v30 = v34;
  if ( v34 )
    Win32FreePool(v34);
  UserSessionSwitchLeaveCrit(v30, v11, v12, v13);
  return v9;
}
