/*
 * XREFs of ?UnmapSharedSectionView@CComposition@@QEAAXPEAX@Z @ 0x18002D790
 * Callers:
 *     ??1CSharedSection@@UEAA@XZ @ 0x18002BC2C (--1CSharedSection@@UEAA@XZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18007968C (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 */

void __fastcall CComposition::UnmapSharedSectionView(CComposition *this, void *a2)
{
  unsigned int v2; // eax
  unsigned int v3; // edx
  int v4; // ebx
  int v5; // eax
  LPCVOID lpBaseAddress; // [rsp+48h] [rbp+10h] BYREF

  lpBaseAddress = a2;
  v2 = *((_DWORD *)this + 196);
  v3 = v2 + 1;
  v4 = v2 + 1 < v2 ? 0x80070216 : 0;
  if ( v2 + 1 < v2 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, 0xB5u);
  }
  else if ( v3 > *((_DWORD *)this + 195) )
  {
    v5 = DynArrayImpl<0>::AddMultipleAndSet((char *)this + 760, 8LL, 1LL, &lpBaseAddress);
    v4 = v5;
    if ( v5 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, 0xC0u);
  }
  else
  {
    *(_QWORD *)(*((_QWORD *)this + 95) + 8LL * v2) = lpBaseAddress;
    *((_DWORD *)this + 196) = v3;
  }
  if ( v4 < 0 )
    UnmapViewOfFile(lpBaseAddress);
}
