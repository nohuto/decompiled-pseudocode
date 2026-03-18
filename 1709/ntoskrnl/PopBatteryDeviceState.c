/*
 * XREFs of PopBatteryDeviceState @ 0x1406FE138
 * Callers:
 *     NtPowerInformation @ 0x1404E90A0 (NtPowerInformation.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x140084BB0 (ExAcquirePushLockSharedEx.c)
 *     PopReleaseRwLock @ 0x1400B1870 (PopReleaseRwLock.c)
 *     RtlEqualUnicodeString @ 0x140483080 (RtlEqualUnicodeString.c)
 *     RtlPrefixUnicodeString @ 0x1405223F0 (RtlPrefixUnicodeString.c)
 */

__int64 __fastcall PopBatteryDeviceState(wchar_t *a1, __int64 a2)
{
  signed int v4; // ebx
  unsigned __int16 v5; // di
  unsigned __int16 v6; // si
  wchar_t *v7; // r14
  __int64 v8; // rcx
  wchar_t *v9; // rax
  __int16 v10; // dx
  struct _KTHREAD *CurrentThread; // rax
  struct _KTHREAD *v12; // rax
  __int64 v13; // rdi
  __m128i v14; // xmm0
  __int64 v15; // rbx
  __int128 v16; // xmm0
  UNICODE_STRING String2; // [rsp+20h] [rbp-20h] BYREF
  UNICODE_STRING v19; // [rsp+30h] [rbp-10h] BYREF

  *(_DWORD *)&String2.Length = 0;
  String2.Buffer = 0LL;
  v4 = 0;
  v5 = 0;
  v6 = 0;
  v7 = 0LL;
  if ( a1 )
  {
    v8 = 0x7FFFLL;
    v9 = a1;
    do
    {
      if ( !*v9 )
        break;
      ++v9;
      --v8;
    }
    while ( v8 );
    v4 = v8 == 0 ? 0xC000000D : 0;
    v10 = v8 ? 0x7FFF - v8 : 0;
    if ( v8 )
    {
      v5 = 2 * v10;
      String2.Buffer = a1;
      v6 = 2 * v10 + 2;
      String2.Length = 2 * v10;
      String2.MaximumLength = v6;
      v7 = a1;
    }
  }
  if ( v4 >= 0 )
  {
    if ( v5 > 8u
      && (RtlPrefixUnicodeString(&PopDevicePrefixNt, &String2, 0)
       || RtlPrefixUnicodeString(&PopDevicePrefixWin32, &String2, 0)) )
    {
      CurrentThread = KeGetCurrentThread();
      String2.Buffer = v7 + 4;
      String2.Length = v5 - 8;
      --CurrentThread->KernelApcDisable;
      String2.MaximumLength = v6 - 8;
      ExAcquirePushLockSharedEx((ULONG_PTR)&PopPolicyDeviceLock, 0LL);
      v12 = KeGetCurrentThread();
      --v12->KernelApcDisable;
      ExAcquirePushLockSharedEx((ULONG_PTR)&PopCB, 0LL);
      v13 = qword_140365920;
      if ( (__int64 *)qword_140365920 == &qword_140365920 )
        goto LABEL_22;
      do
      {
        v14 = *(__m128i *)(v13 + 32);
        v15 = v13;
        *(_QWORD *)&v19.Length = *(_QWORD *)(v13 + 32);
        v19.Length -= 8;
        v19.MaximumLength -= 8;
        v19.Buffer = (wchar_t *)(_mm_srli_si128(v14, 8).m128i_u64[0] + 8);
        if ( RtlEqualUnicodeString(&String2, &v19, 1u) )
          break;
        v13 = *(_QWORD *)v13;
        v15 = 0LL;
      }
      while ( (__int64 *)v13 != &qword_140365920 );
      if ( !v15 )
      {
LABEL_22:
        v4 = -1073741772;
      }
      else if ( *(_DWORD *)(v15 + 104) == 3 )
      {
        *(_OWORD *)a2 = *(_OWORD *)(v15 + 112);
        *(_OWORD *)(a2 + 16) = *(_OWORD *)(v15 + 128);
        *(_DWORD *)(a2 + 32) = *(_DWORD *)(v15 + 144);
        v16 = *(_OWORD *)(v15 + 148);
        v4 = 0;
        *(_OWORD *)(a2 + 36) = v16;
      }
      else
      {
        v4 = -1073741661;
      }
      PopReleaseRwLock((ULONG_PTR)&PopCB);
      PopReleaseRwLock((ULONG_PTR)&PopPolicyDeviceLock);
    }
    else
    {
      return (unsigned int)-1073741773;
    }
  }
  return (unsigned int)v4;
}
