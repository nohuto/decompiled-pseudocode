/*
 * XREFs of sub_1800FB6A4 @ 0x1800FB6A4
 * Callers:
 *     RtlpMuiRegLoadRegistryInfo @ 0x18006D210 (RtlpMuiRegLoadRegistryInfo.c)
 * Callees:
 *     RtlFreeHeap @ 0x1800244A0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x180029F40 (RtlAllocateHeap.c)
 *     RtlCultureNameToLCID @ 0x180045FF0 (RtlCultureNameToLCID.c)
 *     RtlInitUnicodeString @ 0x1800461D0 (RtlInitUnicodeString.c)
 *     wcspbrk @ 0x18009BC00 (wcspbrk.c)
 *     memmove @ 0x1800ABA80 (memmove.c)
 *     sub_1800FA22C @ 0x1800FA22C (sub_1800FA22C.c)
 */

__int64 __fastcall sub_1800FB6A4(__int64 a1)
{
  int v1; // r14d
  PVOID v3; // r13
  PVOID Heap; // r12
  int v5; // esi
  unsigned int v6; // ebx
  unsigned int v7; // eax
  PVOID v8; // r15
  const WCHAR *v9; // r14
  int v10; // ebx
  wchar_t *v11; // rsi
  wchar_t *v12; // rax
  unsigned int v13; // eax
  PVOID v14; // r15
  int v15; // ebx
  const WCHAR *v16; // r14
  wchar_t *v17; // rsi
  wchar_t *v18; // rax
  unsigned int v19; // eax
  wchar_t *v20; // rbx
  PVOID v21; // r15
  const WCHAR *v22; // r14
  int v23; // ebx
  wchar_t *v24; // rsi
  wchar_t *v25; // rax
  __int64 result; // rax
  int v27; // [rsp+20h] [rbp-38h]
  int v28; // [rsp+24h] [rbp-34h]
  int v29; // [rsp+28h] [rbp-30h]
  int v30; // [rsp+2Ch] [rbp-2Ch]
  PVOID BaseAddress; // [rsp+30h] [rbp-28h] BYREF
  wchar_t *String; // [rsp+38h] [rbp-20h]
  _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-18h] BYREF
  size_t Size; // [rsp+A0h] [rbp+48h] BYREF
  int v35; // [rsp+A8h] [rbp+50h]
  DWORD Lcid; // [rsp+B0h] [rbp+58h] BYREF
  ULONG Type; // [rsp+B8h] [rbp+60h] BYREF

  v30 = -1;
  v1 = 0;
  BaseAddress = 0LL;
  v35 = 0;
  v3 = 0LL;
  v27 = 0;
  Heap = 0LL;
  String = 0LL;
  v5 = 0;
  v28 = 0;
  v29 = 0;
  if ( !a1 )
  {
    v6 = -1073741811;
    goto LABEL_73;
  }
  if ( (int)sub_1800FA22C(L"WindowsExcludedProcs", &Type, (PULONG)&Size, &BaseAddress) >= 0 )
  {
    v29 = 1;
    if ( BaseAddress )
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, BaseAddress);
    BaseAddress = 0LL;
  }
  if ( (int)sub_1800FA22C(L"Kernel-MUI-Number-Allowed", &Type, (PULONG)&Size, &BaseAddress) >= 0 )
  {
    v30 = *(_DWORD *)BaseAddress;
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, BaseAddress);
    BaseAddress = 0LL;
  }
  if ( (int)sub_1800FA22C(L"Kernel-MUI-Language-Allowed", &Type, (PULONG)&Size, &BaseAddress) < 0 )
  {
LABEL_27:
    if ( (int)sub_1800FA22C(L"Kernel-MUI-Language-Disallowed", &Type, (PULONG)&Size, &BaseAddress) >= 0 )
    {
      v13 = Size;
      v27 = Size + 4;
      if ( (_DWORD)Size == -4 )
      {
        Heap = 0LL;
      }
      else
      {
        Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, (unsigned int)(Size + 4));
        v13 = Size;
      }
      if ( !Heap )
      {
        v5 = 0;
        v6 = -1073741801;
LABEL_67:
        v1 = v35;
        goto LABEL_68;
      }
      v14 = BaseAddress;
      memmove(Heap, BaseAddress, v13);
      v15 = 0;
      v16 = (const WCHAR *)Heap;
      v17 = wcspbrk((const wchar_t *)Heap, Control);
      LOWORD(v18) = 0;
      if ( v17 )
      {
        do
        {
          *v17 = 0;
          RtlInitUnicodeString(&DestinationString, v16);
          if ( RtlCultureNameToLCID(&DestinationString, &Lcid) )
            ++v15;
          v16 = v17 + 1;
          v18 = wcspbrk(v17 + 1, Control);
          v17 = v18;
        }
        while ( v18 );
        v14 = BaseAddress;
      }
      if ( *v16 != (_WORD)v18 )
      {
        RtlInitUnicodeString(&DestinationString, v16);
        if ( RtlCultureNameToLCID(&DestinationString, &Lcid) )
          ++v15;
      }
      if ( !v15 )
      {
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
        v14 = BaseAddress;
        Heap = 0LL;
        v27 = 0;
      }
      if ( v14 )
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, BaseAddress);
      BaseAddress = 0LL;
    }
    if ( (int)sub_1800FA22C(L"Kernel-MUI-Language-SKU", &Type, (PULONG)&Size, &BaseAddress) >= 0 )
    {
      v19 = Size;
      v28 = Size + 4;
      if ( (_DWORD)Size == -4 )
      {
        v20 = 0LL;
      }
      else
      {
        v20 = (wchar_t *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, (unsigned int)(Size + 4));
        v19 = Size;
      }
      String = v20;
      if ( !v20 )
      {
        v28 = 0;
        v6 = -1073741801;
LABEL_66:
        v5 = v27;
        goto LABEL_67;
      }
      v21 = BaseAddress;
      memmove(v20, BaseAddress, v19);
      v22 = v20;
      v23 = 0;
      v24 = wcspbrk(String, Control);
      LOWORD(v25) = 0;
      if ( v24 )
      {
        do
        {
          *v24 = 0;
          RtlInitUnicodeString(&DestinationString, v22);
          if ( RtlCultureNameToLCID(&DestinationString, &Lcid) )
            ++v23;
          v22 = v24 + 1;
          v25 = wcspbrk(v24 + 1, Control);
          v24 = v25;
        }
        while ( v25 );
        v21 = BaseAddress;
      }
      if ( *v22 != (_WORD)v25 )
      {
        RtlInitUnicodeString(&DestinationString, v22);
        if ( RtlCultureNameToLCID(&DestinationString, &Lcid) )
          ++v23;
      }
      if ( !v23 )
      {
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, String);
        v21 = BaseAddress;
        v28 = 0;
        String = 0LL;
      }
      if ( v21 )
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, BaseAddress);
      BaseAddress = 0LL;
    }
    v6 = 0;
    goto LABEL_66;
  }
  v7 = Size;
  v35 = Size + 4;
  if ( (_DWORD)Size != -4 )
  {
    v3 = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, (unsigned int)(Size + 4));
    v7 = Size;
  }
  if ( v3 )
  {
    v8 = BaseAddress;
    memmove(v3, BaseAddress, v7);
    v9 = (const WCHAR *)v3;
    v10 = 0;
    v11 = wcspbrk((const wchar_t *)v3, Control);
    LOWORD(v12) = 0;
    if ( v11 )
    {
      do
      {
        *v11 = 0;
        RtlInitUnicodeString(&DestinationString, v9);
        if ( RtlCultureNameToLCID(&DestinationString, &Lcid) )
          ++v10;
        v9 = v11 + 1;
        v12 = wcspbrk(v11 + 1, Control);
        v11 = v12;
      }
      while ( v12 );
      v8 = BaseAddress;
    }
    if ( *v9 != (_WORD)v12 )
    {
      RtlInitUnicodeString(&DestinationString, v9);
      if ( RtlCultureNameToLCID(&DestinationString, &Lcid) )
        ++v10;
    }
    if ( !v10 )
    {
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v3);
      v8 = BaseAddress;
      v3 = 0LL;
      v35 = 0;
    }
    if ( v8 )
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, BaseAddress);
    BaseAddress = 0LL;
    goto LABEL_27;
  }
  v6 = -1073741801;
LABEL_68:
  if ( BaseAddress )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, BaseAddress);
  if ( v3 && Heap )
  {
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
    Heap = 0LL;
    v5 = 0;
  }
LABEL_73:
  *(_DWORD *)a1 |= 0x800u;
  *(_DWORD *)(a1 + 116) = v29;
  *(_DWORD *)(a1 + 120) = v30;
  *(_QWORD *)(a1 + 136) = String;
  *(_DWORD *)(a1 + 144) = v28;
  result = v6;
  *(_QWORD *)(a1 + 128) = v3;
  *(_QWORD *)(a1 + 152) = Heap;
  *(_DWORD *)(a1 + 148) = v1;
  *(_DWORD *)(a1 + 160) = v5;
  return result;
}
