/*
 * XREFs of NtUserSlicerControl @ 0x1C01EC8D0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     memmove @ 0x1C01456C0 (memmove.c)
 *     memset @ 0x1C0145A00 (memset.c)
 *     MagSlicerControl @ 0x1C01A96C8 (MagSlicerControl.c)
 */

__int64 __fastcall NtUserSlicerControl(__int64 a1, int a2, __m128i *a3, unsigned int a4)
{
  __int64 v8; // r15
  ULONG64 i; // rdx
  __m128i *v10; // r8
  __int64 v11; // r9
  __int64 v12; // r13
  NTSTATUS v13; // ebx
  ULONG64 v14; // rcx
  __m128i *v15; // rcx
  ULONG64 v16; // rcx
  unsigned int v17; // eax
  unsigned __int64 v18; // rcx
  int v19; // eax
  unsigned int v20; // ebx
  __m128i *v21; // rax
  __m128i v22; // xmm1
  __int64 ThreadWin32Thread; // rax
  int v24; // eax
  ULONG v25; // eax
  __int64 v26; // rdx
  __m128i *v27; // rcx
  unsigned int Size; // [rsp+34h] [rbp-154h]
  __m128i *Src; // [rsp+40h] [rbp-148h]
  __m128i *v31; // [rsp+58h] [rbp-130h]
  __int64 v32; // [rsp+98h] [rbp-F0h]
  __m128i v33; // [rsp+B0h] [rbp-D8h]
  __m128i v34; // [rsp+F0h] [rbp-98h]
  __m128i v35; // [rsp+100h] [rbp-88h]
  __m128i v36[3]; // [rsp+110h] [rbp-78h] BYREF

  Src = 0LL;
  Size = 0;
  memset(v36, 0, sizeof(v36));
  v31 = 0LL;
  v8 = 1LL;
  EnterCrit(0LL, 1LL);
  v12 = ValidateHwnd(a1);
  if ( v12 && a2 < 5 )
  {
    if ( a2 >= 0 )
    {
      if ( a2 <= 1 )
      {
        if ( a3 )
        {
          v13 = -1073741811;
          goto LABEL_60;
        }
        if ( a4 )
        {
          v13 = -1073741306;
          goto LABEL_60;
        }
        Src = 0LL;
        Size = 0;
      }
      else if ( a2 == 2 )
      {
        if ( !a3 )
        {
          v13 = -1073741811;
          goto LABEL_60;
        }
        if ( a4 < 0x10 )
        {
          v13 = -1073741306;
          goto LABEL_60;
        }
        v16 = (ULONG64)a3;
        i = (ULONG64)&a3[3];
        if ( &a3[3] < a3 || i > MmUserProbeAddress )
          v16 = MmUserProbeAddress;
        v34 = *(__m128i *)(v16 + 16);
        v35 = *(__m128i *)(v16 + 32);
        v36[0] = *(__m128i *)v16;
        v36[1] = v34;
        v36[2] = v35;
        v17 = _mm_cvtsi128_si32(v36[0]);
        if ( v17 > 6 )
        {
          v13 = -1073741306;
          goto LABEL_60;
        }
        v18 = 32LL * v17;
        if ( v18 > 0xFFFFFFFF )
        {
          LODWORD(v18) = -1;
          v19 = -2147024362;
        }
        else
        {
          v19 = 0;
        }
        if ( v19 < 0 )
        {
          v13 = -1073741811;
          goto LABEL_60;
        }
        if ( (int)v18 + 16 < (unsigned int)v18 )
        {
          v13 = -1073741811;
          goto LABEL_60;
        }
        v20 = v18 + 16;
        v21 = (__m128i *)Win32AllocPool(v20, 1735226197LL);
        Src = v21;
        if ( !v21 )
        {
          v13 = -1073741801;
          goto LABEL_60;
        }
        v31 = v21;
        *v21 = v36[0];
        for ( i = 0LL; (unsigned int)i < v21->m128i_i32[0]; i = (unsigned int)(i + 1) )
        {
          v11 = 2LL * (unsigned int)i;
          v10 = &a3[v11 + 1];
          if ( &v10[2] < v10 || (unsigned __int64)&v10[2] > MmUserProbeAddress )
            v10 = (__m128i *)MmUserProbeAddress;
          v22 = v10[1];
          v21[v11 + 1] = *v10;
          v21[v11 + 2] = v22;
        }
        Size = v20;
      }
      else if ( a2 == 3 )
      {
        if ( !a3 )
        {
          v13 = -1073741811;
          goto LABEL_60;
        }
        if ( a4 < 0x18 )
        {
          v13 = -1073741306;
          goto LABEL_60;
        }
        v15 = a3;
        i = (ULONG64)&a3[1].m128i_u64[1];
        if ( &a3[1].m128i_u64[1] < (unsigned __int64 *)a3 || i > MmUserProbeAddress )
          v15 = (__m128i *)MmUserProbeAddress;
        v32 = v15[1].m128i_i64[0];
        v36[0] = *v15;
        v36[1].m128i_i64[0] = v32;
        Src = v36;
        Size = 24;
      }
      else
      {
        if ( !a3 )
        {
          v13 = -1073741811;
          goto LABEL_60;
        }
        if ( a4 < 0x20 )
        {
          v13 = -1073741306;
          goto LABEL_60;
        }
        v14 = (ULONG64)a3;
        i = (ULONG64)&a3[2];
        if ( &a3[2] < a3 || i > MmUserProbeAddress )
          v14 = MmUserProbeAddress;
        v33 = *(__m128i *)(v14 + 16);
        v36[0] = *(__m128i *)v14;
        v36[1] = v33;
        Src = v36;
        Size = 32;
      }
    }
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), i, (__int64)v10, v11 * 16);
    v24 = MagSlicerControl(*(_QWORD **)&gMagnContext, ThreadWin32Thread, v12, a2, Src, Size);
    v13 = v24;
    if ( a2 == 4 && v24 >= 0 )
    {
      if ( (unsigned __int64)a3 >= MmUserProbeAddress )
        a3 = (__m128i *)MmUserProbeAddress;
      memmove(a3, Src, Size);
    }
LABEL_60:
    if ( v13 >= 0 )
      goto LABEL_62;
    goto LABEL_61;
  }
  v13 = -1073741811;
LABEL_61:
  v25 = RtlNtStatusToDosError(v13);
  UserSetLastError(v25, v26);
  v8 = 0LL;
LABEL_62:
  v27 = v31;
  if ( v31 )
    Win32FreePool(v31, i, v10);
  UserSessionSwitchLeaveCrit(v27, i);
  return v8;
}
