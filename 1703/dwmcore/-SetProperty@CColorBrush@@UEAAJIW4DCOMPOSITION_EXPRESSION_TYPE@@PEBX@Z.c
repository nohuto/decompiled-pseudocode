/*
 * XREFs of ?SetProperty@CColorBrush@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x18008BC80
 * Callers:
 *     <none>
 * Callees:
 *     ?NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180034990 (-NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetCount@CPtrArrayBase@@IEBA_KXZ @ 0x1800BBD88 (-GetCount@CPtrArrayBase@@IEBA_KXZ.c)
 *     ??ACPtrArrayBase@@IEBA_K_K@Z @ 0x1800BBE10 (--ACPtrArrayBase@@IEBA_K_K@Z.c)
 *     ?FindElement@?$CGenericTableMap@IVCAnimationSourceMapEntry@@@@QEAAPEAVCAnimationSourceMapEntry@@I@Z @ 0x1800C1020 (-FindElement@-$CGenericTableMap@IVCAnimationSourceMapEntry@@@@QEAAPEAVCAnimationSourceMapEntry@@.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CColorBrush::SetProperty(__int64 a1, int a2, int a3, __int128 *a4)
{
  int v5; // eax
  int v6; // ecx
  unsigned int (__fastcall *v7)(__int64, __int64); // rax
  __int64 v8; // rax
  unsigned __int64 v9; // rdi
  __int64 v10; // rbp
  __int64 v11; // r14
  unsigned __int64 Count; // rax
  _DWORD *v13; // rcx
  __int64 (__fastcall *v14)(__int64, _DWORD *, unsigned int, __int64); // rax
  unsigned int v15; // ecx
  int v16; // edx
  int v17; // edx
  __int64 (__fastcall *v18)(__int64, _QWORD, __int64); // rax
  __int64 v19; // rax
  __int64 v20; // rdi
  __int64 v21; // rsi
  _DWORD *v22; // rax
  __int64 v23; // rcx
  __int64 v24; // rdi
  __int64 Element; // rax
  _QWORD *v27; // rdx
  __int64 i; // r8
  __int64 v29; // rcx
  __int128 v30; // [rsp+30h] [rbp-38h]

  if ( a3 != 70 || (v30 = *a4, a2) )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x42u);
    return 2147942487LL;
  }
  if ( *(float *)(a1 + 80) == *(float *)&v30
    && *(float *)(a1 + 84) == *((float *)&v30 + 1)
    && *(float *)(a1 + 88) == *((float *)&v30 + 2)
    && *(float *)(a1 + 92) == *((float *)&v30 + 3) )
  {
    return 0LL;
  }
  v5 = *(_DWORD *)(a1 + 32);
  *(_OWORD *)(a1 + 80) = v30;
  *(_QWORD *)(a1 + 72) = 0LL;
  v6 = v5 ^ ((unsigned __int8)v5 ^ (unsigned __int8)((v5 & 0xFE) + 2)) & 6;
  *(_DWORD *)(a1 + 32) = v6;
  if ( (v6 & 6) == 2 )
  {
    v7 = *(unsigned int (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 128LL);
    if ( (char *)v7 == (char *)CSpriteVisualContent::OnChanged )
    {
      *(_QWORD *)(a1 + 72) = 0LL;
      goto LABEL_7;
    }
    if ( v7(a1, 5LL) )
    {
LABEL_7:
      v8 = *(_QWORD *)(a1 + 24);
      if ( (v8 & 2) != 0 )
        v8 = *(_QWORD *)(v8 & 0xFFFFFFFFFFFFFFFCuLL);
      else
        LODWORD(v8) = v8 & 1;
      if ( (_DWORD)v8 )
      {
        v9 = 0LL;
        v10 = 16LL;
        v11 = (unsigned int)v8;
        do
        {
          Count = CPtrArrayBase::GetCount((CPtrArrayBase *)(a1 + 24));
          if ( v9 >= Count )
          {
            v13 = 0LL;
          }
          else if ( Count == 1 )
          {
            v13 = (_DWORD *)(*(_QWORD *)(a1 + 24) & 0xFFFFFFFFFFFFFFFCuLL);
          }
          else
          {
            v13 = *(_DWORD **)((*(_QWORD *)(a1 + 24) & 0xFFFFFFFFFFFFFFFCuLL) + v10);
          }
          v14 = *(__int64 (__fastcall **)(__int64, _DWORD *, unsigned int, __int64))(*(_QWORD *)a1 + 64LL);
          if ( v14 == CResource::NotifyListenerOfChange )
            CResource::NotifyOnChanged(v13, 5LL, 0LL);
          else
            ((void (__fastcall *)(__int64, _DWORD *, __int64))v14)(a1, v13, 5LL);
          ++v9;
          v10 += 8LL;
          --v11;
        }
        while ( v11 );
      }
    }
  }
  (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 72LL))(a1);
  v15 = *(_DWORD *)(a1 + 32);
  v16 = v15 ^ ((unsigned __int8)v15 ^ (unsigned __int8)(2 * (v15 >> 1) - 2)) & 6;
  v17 = ((unsigned __int8)v16 ^ (unsigned __int8)(((v15 ^ (v15 ^ (2 * (v15 >> 1) - 2)) & 6) & 0xFE) + 2)) & 6 ^ v16;
  *(_DWORD *)(a1 + 32) = v17;
  if ( (v17 & 6) == 2 )
  {
    v18 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)a1 + 128LL);
    if ( v18 == CSpriteVisualContent::OnChanged || (unsigned int)v18(a1, 0LL, a1) )
    {
      v19 = *(_QWORD *)(a1 + 24);
      if ( (v19 & 2) != 0 )
        v19 = *(_QWORD *)(v19 & 0xFFFFFFFFFFFFFFFCuLL);
      else
        LODWORD(v19) = v19 & 1;
      if ( (_DWORD)v19 )
      {
        v20 = 0LL;
        v21 = (unsigned int)v19;
        do
        {
          v22 = (_DWORD *)CPtrArrayBase::operator[](a1 + 24, v20);
          if ( *(__int64 (__fastcall **)(__int64, _DWORD *, unsigned int, __int64))(*(_QWORD *)a1 + 64LL) == CResource::NotifyListenerOfChange )
            CResource::NotifyOnChanged(v22, 0LL, a1);
          else
            (*(void (__fastcall **)(__int64, _DWORD *, _QWORD, __int64))(*(_QWORD *)a1 + 64LL))(a1, v22, 0LL, a1);
          ++v20;
          --v21;
        }
        while ( v21 );
      }
    }
  }
  (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 72LL))(a1);
  v23 = *(_QWORD *)(a1 + 40);
  *(_DWORD *)(a1 + 32) ^= ((unsigned __int8)*(_DWORD *)(a1 + 32) ^ (unsigned __int8)(2 * (*(_DWORD *)(a1 + 32) >> 1) - 2)) & 6;
  v24 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 400LL);
  if ( v23 )
  {
    Element = CGenericTableMap<unsigned int,CAnimationSourceMapEntry>::FindElement(v23, 0LL);
    if ( Element )
    {
      v27 = (_QWORD *)(Element + 8);
      if ( Element != -8 )
      {
        for ( i = 0LL; (unsigned int)i < *(_DWORD *)(Element + 32); *(_QWORD *)(*(_QWORD *)(*v27 + 8 * v29) + 216LL) = v24 )
        {
          v29 = (unsigned int)i;
          i = (unsigned int)(i + 1);
        }
        *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 240LL) + 376LL) |= 2u;
        (*(void (__fastcall **)(_QWORD, _QWORD *, __int64))(**(_QWORD **)(*(_QWORD *)(a1 + 16) + 560LL) + 104LL))(
          *(_QWORD *)(*(_QWORD *)(a1 + 16) + 560LL),
          v27,
          i);
      }
    }
  }
  return 0LL;
}
