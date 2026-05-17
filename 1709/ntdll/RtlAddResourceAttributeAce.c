/*
 * XREFs of RtlAddResourceAttributeAce @ 0x1800E7040
 * Callers:
 *     <none>
 * Callees:
 *     RtlFirstFreeAce @ 0x18002D790 (RtlFirstFreeAce.c)
 *     RtlValidAcl @ 0x18002D7F0 (RtlValidAcl.c)
 *     RtlValidSid @ 0x18002DA50 (RtlValidSid.c)
 *     RtlFreeHeap @ 0x18003ECC0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x180040DF0 (RtlAllocateHeap.c)
 *     RtlCopySid @ 0x1800578A0 (RtlCopySid.c)
 *     __security_check_cookie @ 0x180090C90 (__security_check_cookie.c)
 *     memmove @ 0x1800A6940 (memmove.c)
 *     memset @ 0x1800A6C80 (memset.c)
 *     RtlpConvertAbsoluteToRelativeSecurityAttribute @ 0x1800E7630 (RtlpConvertAbsoluteToRelativeSecurityAttribute.c)
 *     RtlpValidAttributeInfo @ 0x1800E8550 (RtlpValidAttributeInfo.c)
 */

__int64 __fastcall RtlAddResourceAttributeAce(
        unsigned __int8 *a1,
        unsigned int a2,
        int a3,
        int a4,
        __int64 a5,
        __int64 a6,
        unsigned int *a7)
{
  _BYTE *v9; // rsi
  int v11; // ebx
  int v12; // ecx
  int v13; // ecx
  __int64 Heap; // rax
  size_t v15; // r13
  unsigned __int16 v16; // ax
  unsigned __int16 v17; // dx
  unsigned __int8 *v18; // rcx
  unsigned int i; // r8d
  __int64 v20; // r12
  char v21; // al
  unsigned int Size; // [rsp+28h] [rbp-E0h] BYREF
  int Size_4; // [rsp+2Ch] [rbp-DCh]
  __int64 v25; // [rsp+30h] [rbp-D8h]
  __int64 v26; // [rsp+38h] [rbp-D0h] BYREF
  int v27; // [rsp+40h] [rbp-C8h]
  unsigned __int16 v28; // [rsp+44h] [rbp-C4h]
  _BYTE Src[256]; // [rsp+48h] [rbp-C0h] BYREF

  Size_4 = a3;
  v26 = 0LL;
  v27 = 0;
  v9 = 0LL;
  v28 = 256;
  memset(Src, 0, sizeof(Src));
  Size = 256;
  if ( !a7 )
    return (unsigned int)-1073741811;
  *a7 = 0;
  if ( !a1 )
    return (unsigned int)-1073741705;
  if ( !RtlValidSid((_BYTE *)a5) )
    return (unsigned int)-1073741704;
  v12 = *(_DWORD *)(a5 + 2) - v27;
  if ( !v12 )
    v12 = *(unsigned __int16 *)(a5 + 6) - v28;
  if ( v12 )
    return (unsigned int)-1073741811;
  if ( *(_BYTE *)(a5 + 1) == 1 && !*(_DWORD *)(a5 + 8) )
  {
    if ( *a1 > 4u || a2 > 4 )
      return (unsigned int)-1073741735;
    v13 = (unsigned __int8)a2;
    if ( *a1 > (unsigned __int8)a2 )
      v13 = *a1;
    LODWORD(v25) = v13;
    if ( (Size_4 & 0xFFFFFFE0) == 0
      && !a4
      && (unsigned __int8)RtlpValidAttributeInfo(a6, 0LL)
      && *(_DWORD *)(a6 + 4) == 1 )
    {
      v9 = Src;
      v11 = RtlpConvertAbsoluteToRelativeSecurityAttribute(*(_QWORD *)(a6 + 8), Src, &Size);
      if ( v11 == -1073741789 )
      {
        Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, NtdllBaseTag + 1310720, Size);
        v9 = (_BYTE *)Heap;
        if ( !Heap )
          return (unsigned int)-1073741801;
        v11 = RtlpConvertAbsoluteToRelativeSecurityAttribute(*(_QWORD *)(a6 + 8), Heap, &Size);
      }
      if ( v11 >= 0 )
      {
        if ( RtlValidAcl((__int64)a1) && RtlFirstFreeAce((__int64)a1, &v26) )
        {
          v15 = Size;
          if ( Size > 0xFFFF
            || (v16 = 4 * (*(unsigned __int8 *)(a5 + 1) + 4), v17 = v16 + Size, (unsigned __int16)(v16 + Size) < v16) )
          {
            v11 = -1073741675;
          }
          else
          {
            *a7 = 8;
            v18 = a1 + 8;
            for ( i = 0; i < *((unsigned __int16 *)a1 + 2); v18 += *((unsigned __int16 *)v18 + 1) )
            {
              ++i;
              *a7 += *((unsigned __int16 *)v18 + 1);
            }
            v20 = v26;
            *a7 += v17;
            if ( v20 && v20 + (unsigned __int64)v17 <= (unsigned __int64)&a1[*((unsigned __int16 *)a1 + 1)] )
            {
              v21 = Size_4;
              *(_WORD *)(v20 + 2) = v17;
              *(_BYTE *)(v20 + 1) = v21;
              *(_BYTE *)v20 = 18;
              *(_DWORD *)(v20 + 4) = 0;
              RtlCopySid(4 * *(unsigned __int8 *)(a5 + 1) + 8, (void *)(v20 + 8), (unsigned __int8 *)a5);
              memmove((void *)(v20 + 8 + 4 * (unsigned int)*(unsigned __int8 *)(a5 + 1) + 8), v9, v15);
              ++*((_WORD *)a1 + 2);
              *a1 = v25;
            }
            else
            {
              v11 = -1073741671;
              *a7 = (*a7 + 3) & 0xFFFFFFFC;
            }
          }
        }
        else
        {
          v11 = -1073741705;
        }
      }
      goto LABEL_39;
    }
    return (unsigned int)-1073741811;
  }
  v11 = -1073741811;
LABEL_39:
  if ( v9 && v9 != Src )
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned __int64)v9);
  return (unsigned int)v11;
}
