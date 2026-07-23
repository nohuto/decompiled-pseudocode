/*
 * XREFs of sub_18010A158 @ 0x18010A158
 * Callers:
 *     PssNtCaptureSnapshot @ 0x180109790 (PssNtCaptureSnapshot.c)
 * Callees:
 *     ZwClose @ 0x18009ACA0 (ZwClose.c)
 *     ZwMapViewOfSection @ 0x18009AFC0 (ZwMapViewOfSection.c)
 *     ZwUnmapViewOfSection @ 0x18009B000 (ZwUnmapViewOfSection.c)
 *     ZwCreateSection @ 0x18009B400 (ZwCreateSection.c)
 *     memset @ 0x1800A16C0 (memset.c)
 *     sub_18010E570 @ 0x18010E570 (sub_18010E570.c)
 *     sub_18010E690 @ 0x18010E690 (sub_18010E690.c)
 */

NTSTATUS __fastcall sub_18010A158(__int64 a1, __int64 a2)
{
  NTSTATUS result; // eax
  size_t v5; // rbx
  NTSTATUS v6; // esi
  int v7; // eax
  _DWORD *v8; // rdx
  int v9; // ebx
  int v10; // eax
  PVOID BaseAddress; // [rsp+50h] [rbp-20h] BYREF
  LARGE_INTEGER MaximumSize; // [rsp+58h] [rbp-18h] BYREF
  ULONG_PTR ViewSize[2]; // [rsp+60h] [rbp-10h] BYREF
  size_t Size; // [rsp+B0h] [rbp+40h] BYREF
  HANDLE SectionHandle; // [rsp+B8h] [rbp+48h] BYREF

  BaseAddress = 0LL;
  LODWORD(Size) = 0;
  SectionHandle = 0LL;
  ViewSize[0] = 0LL;
  MaximumSize.QuadPart = 0LL;
  result = sub_18010E690(a2, &Size);
  if ( result >= 0 )
  {
    v5 = (unsigned int)Size;
    if ( (_DWORD)Size )
    {
      MaximumSize.LowPart = Size;
      result = ZwCreateSection(
                 &SectionHandle,
                 0xF0007u,
                 (POBJECT_ATTRIBUTES)&stru_1801317F8,
                 &MaximumSize,
                 4u,
                 0x8000000u,
                 0LL);
      if ( result >= 0 )
      {
        v6 = ZwMapViewOfSection(
               SectionHandle,
               (HANDLE)0xFFFFFFFFFFFFFFFFLL,
               &BaseAddress,
               0LL,
               0LL,
               0LL,
               ViewSize,
               ViewShare,
               0,
               4u);
        if ( v6 >= 0 )
        {
          memset(BaseAddress, 0, v5);
          v7 = sub_18010E570(a2, BaseAddress, (unsigned int)v5);
          v8 = BaseAddress;
          v9 = v7;
          if ( v7 >= 0 )
          {
            *(_QWORD *)(a1 + 1128) = SectionHandle;
            v10 = v8[1];
            *(_DWORD *)(a1 + 4) |= 0x10u;
            *(_DWORD *)(a1 + 1136) = v10 + 8;
            ZwUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, v8);
            return 0;
          }
          else
          {
            ZwUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, BaseAddress);
            ZwClose(SectionHandle);
            return v9;
          }
        }
        else
        {
          ZwClose(SectionHandle);
          return v6;
        }
      }
    }
    else
    {
      return -1073741275;
    }
  }
  return result;
}
