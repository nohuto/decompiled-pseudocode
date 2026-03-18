/*
 * XREFs of xxxProcessAsyncSendMessage @ 0x1C00CD168
 * Callers:
 *     xxxProcessEventMessage @ 0x1C00CD334 (xxxProcessEventMessage.c)
 * Callees:
 *     RtlInitLargeUnicodeString @ 0x1C004DB0C (RtlInitLargeUnicodeString.c)
 *     xxxSendMessage @ 0x1C00509B0 (xxxSendMessage.c)
 *     xxxEndGetWidnowTrackInfoAsync @ 0x1C00B2DE0 (xxxEndGetWidnowTrackInfoAsync.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 */

__int64 __fastcall xxxProcessAsyncSendMessage(__int64 *a1)
{
  __int64 v1; // rbp
  unsigned __int64 v3; // rdi
  __int64 v4; // rdx
  __int64 v5; // r9
  __int64 result; // rax
  __int64 v7; // r8
  unsigned __int64 v8; // rdi
  __int64 v9; // rsi
  __int64 *v10; // r14
  __int64 v11; // rdi
  unsigned int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rax
  unsigned __int16 v16; // si
  _BYTE v17[16]; // [rsp+20h] [rbp-268h] BYREF
  _QWORD v18[4]; // [rsp+30h] [rbp-258h] BYREF
  _WORD v19[264]; // [rsp+50h] [rbp-238h] BYREF

  v1 = a1[3];
  v3 = *a1;
  PsGetThreadWin32Thread(KeGetCurrentThread());
  result = gpsi;
  v7 = (unsigned __int16)v3;
  if ( (unsigned __int64)(unsigned __int16)v3 < *(_QWORD *)(gpsi + 8LL) )
  {
    v8 = v3 >> 16;
    v9 = gSharedInfo[1] + (unsigned int)(v7 * LODWORD(gSharedInfo[2]));
    result = gpKernelHandleTable;
    v10 = (__int64 *)(gpKernelHandleTable + 16 * ((__int64)(unsigned int)(v7 * LODWORD(gSharedInfo[2])) >> 5));
    if ( (_WORD)v8 == *(_WORD *)(v9 + 26)
      || (result = 0xFFFFLL, (_WORD)v8 == 0xFFFF)
      || !(_WORD)v8 && (result = PsGetCurrentProcessWow64Process(gpsi, v4, v7, v5)) != 0 )
    {
      if ( (*(_BYTE *)(v9 + 25) & 1) == 0 && *(_BYTE *)(v9 + 24) == 1 )
      {
        v11 = *v10;
        if ( *v10 )
        {
          v18[0] = *(_QWORD *)(gptiCurrent + 368LL);
          *(_QWORD *)(gptiCurrent + 368LL) = v18;
          v18[1] = v11;
          ++*(_DWORD *)(v11 + 8);
          v12 = *((_DWORD *)a1 + 2);
          if ( v12 >= 0x1A )
          {
            if ( v12 <= 0x1B )
            {
              v15 = a1[3];
              if ( v15 )
              {
                if ( v15 == -1 )
                {
                  v19[0] = 0;
                  RtlInitLargeUnicodeString((__int64)v17, (__int64)v19);
                  a1[3] = (__int64)v17;
                }
                else
                {
                  v16 = a1[3];
                  if ( (unsigned int)UserGetAtomName((unsigned __int16)v15, v19, 260LL) )
                  {
                    RtlInitLargeUnicodeString((__int64)v17, (__int64)v19);
                    a1[3] = (__int64)v17;
                  }
                  else
                  {
                    a1[3] = 0LL;
                  }
                  UserDeleteAtom(v16);
                }
              }
              v1 = a1[3];
              a1[3] = 0LL;
            }
            else if ( v12 == 834 )
            {
              xxxEndGetWidnowTrackInfoAsync(v11);
              return ThreadUnlock1(v14, v13);
            }
          }
          xxxSendMessage(v11, *((_DWORD *)a1 + 2), a1[2], v1);
          return ThreadUnlock1(v14, v13);
        }
      }
    }
  }
  return result;
}
