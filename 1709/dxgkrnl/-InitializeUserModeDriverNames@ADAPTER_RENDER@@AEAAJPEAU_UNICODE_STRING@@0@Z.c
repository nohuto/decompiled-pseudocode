/*
 * XREFs of ?InitializeUserModeDriverNames@ADAPTER_RENDER@@AEAAJPEAU_UNICODE_STRING@@0@Z @ 0x1C0111180
 * Callers:
 *     ?Initialize@ADAPTER_RENDER@@QEAAJXZ @ 0x1C0111244 (-Initialize@ADAPTER_RENDER@@QEAAJXZ.c)
 * Callees:
 *     RtlStringCbLengthW @ 0x1C00123F0 (RtlStringCbLengthW.c)
 */

__int64 __fastcall ADAPTER_RENDER::InitializeUserModeDriverNames(
        ADAPTER_RENDER *this,
        struct _UNICODE_STRING *a2,
        struct _UNICODE_STRING *a3)
{
  __int128 v3; // xmm0
  size_t Length; // r11
  unsigned int v5; // ebx
  const wchar_t *v7; // r14
  size_t v9; // r9
  __int64 v10; // rdi
  unsigned int v11; // esi
  NTSTATUS v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  size_t v16; // r11
  _QWORD *v18; // rax
  struct _UNICODE_STRING v19; // [rsp+20h] [rbp-28h]
  size_t pcbLength; // [rsp+58h] [rbp+10h] BYREF

  v3 = (__int128)*a2;
  Length = a2->Length;
  v5 = 0;
  pcbLength = 0LL;
  *(_DWORD *)(&v19.MaximumLength + 1) = DWORD1(v3);
  v7 = (const wchar_t *)*((_QWORD *)&v3 + 1);
  v9 = 0LL;
  LODWORD(v10) = 0;
  v11 = 0;
  while ( 1 )
  {
    if ( !Length )
      return (unsigned int)v10;
    v7 += v9 >> 1;
    v19.Buffer = (wchar_t *)v7;
    v12 = RtlStringCbLengthW(v7, Length, &pcbLength);
    v10 = v12;
    if ( v12 < 0 )
      break;
    v9 = pcbLength;
    v19.Length = pcbLength;
    if ( v16 > pcbLength )
    {
      v9 = pcbLength + 2;
      pcbLength += 2LL;
    }
    v19.MaximumLength = v9;
    ++v11;
    Length = v16 - (unsigned __int16)v9;
    *a3++ = v19;
    if ( v11 >= 4 )
      return (unsigned int)v10;
  }
  v18 = (_QWORD *)WdLogNewEntry5_WdWarning(v14, v13, v15);
  v18[3] = v11;
  v18[4] = *((_QWORD *)this + 2);
  v18[5] = v10;
  WdLogEvent5_WdWarning(v18);
  if ( !v11 )
    return (unsigned int)v10;
  return v5;
}
