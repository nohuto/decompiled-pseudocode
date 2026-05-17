/*
 * XREFs of LdrpCompleteMapModule @ 0x180021F28
 * Callers:
 *     LdrpMapDllWithSectionHandle @ 0x1800220AC (LdrpMapDllWithSectionHandle.c)
 * Callees:
 *     RtlpImageDirectoryEntryToDataEx @ 0x180026720 (RtlpImageDirectoryEntryToDataEx.c)
 *     RtlGetCurrentServiceSessionId @ 0x18003F2C0 (RtlGetCurrentServiceSessionId.c)
 *     LdrpLogError @ 0x180083E08 (LdrpLogError.c)
 *     LdrpRelocateImage @ 0x180084884 (LdrpRelocateImage.c)
 *     LdrpCorValidateImage @ 0x18008772C (LdrpCorValidateImage.c)
 *     LdrpCorFixupImage @ 0x18008E810 (LdrpCorFixupImage.c)
 *     LdrpLogDbgPrint @ 0x1800D0E14 (LdrpLogDbgPrint.c)
 *     LdrpLogEtwEvent @ 0x1800D1E90 (LdrpLogEtwEvent.c)
 */

__int64 __fastcall LdrpCompleteMapModule(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // rbx
  int v4; // ebp
  __int64 v5; // r12
  int v7; // edi
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v12; // rcx
  __int64 v13; // r13
  __int64 v14; // rdx
  __int64 v15; // rsi
  __int64 v16; // rcx
  __int64 v17; // r14
  int v18; // eax
  __int64 v19; // rbx
  __int64 v20; // rdx
  __int64 v21; // rcx
  char v22; // al
  int v23; // r8d
  int v24; // r9d
  int v25; // r8d
  int v26; // r9d
  __int64 v27; // [rsp+70h] [rbp+8h] BYREF
  __int64 v28; // [rsp+88h] [rbp+20h] BYREF

  v3 = *(_QWORD *)(a1 + 56);
  v4 = a3;
  v5 = a2;
  LOWORD(a3) = 14;
  LOBYTE(a2) = 1;
  v7 = 0;
  v8 = RtlpImageDirectoryEntryToDataEx(*(_QWORD *)(v3 + 48), a2, a3, (unsigned int)&v27, (__int64)&v28);
  v10 = v28;
  if ( v8 < 0 )
    v10 = 0LL;
  v28 = v10;
  if ( !v10 )
    goto LABEL_4;
  if ( (*(_DWORD *)(a1 + 32) & 0x800000) != 0 )
    return (unsigned int)-1073741701;
  *(_DWORD *)(v3 + 104) |= 0x400000u;
  if ( (*(_BYTE *)(v10 + 16) & 1) == 0
    || (v12 = *(_QWORD *)(v3 + 48), *(_DWORD *)(v3 + 104) |= 0x1000000u, v7 = LdrpCorValidateImage(v12), v7 >= 0)
    && ((*(_DWORD *)(a1 + 32) & 0x200000) == 0 || (v7 = LdrpCorFixupImage(*(_QWORD *)(v3 + 48)), v7 >= 0)) )
  {
LABEL_4:
    if ( (*(_WORD *)(v5 + 22) & 0x2000) != 0 )
    {
      if ( *(char *)(*(_QWORD *)(v3 + 176) + 32LL) >= 0 || *(char *)(v5 + 94) < 0 )
      {
        if ( (*(_DWORD *)(v3 + 104) & 0x1000000) == 0 && (v4 == 1073741827 || v4 == 1073741878) )
        {
          v13 = *(_QWORD *)(v3 + 48);
          v15 = 2147353476LL;
          if ( (unsigned int)RtlGetCurrentServiceSessionId((unsigned int)(v4 - 1073741827), v9) )
            v16 = (__int64)NtCurrentPeb()->SharedData + 554;
          else
            v16 = 2147353476LL;
          v17 = 2147353477LL;
          if ( *(_BYTE *)v16 && (NtCurrentPeb()->TracingFlags & 4) != 0 )
          {
            v16 = (unsigned int)RtlGetCurrentServiceSessionId(v16, v14)
                ? (__int64)NtCurrentPeb()->SharedData + 555
                : 2147353477LL;
            if ( (*(_BYTE *)v16 & 0x20) != 0 )
            {
              LOBYTE(v24) = -1;
              LOBYTE(v23) = -1;
              LdrpLogEtwEvent(5264, v13, v23, v24, 0LL, 0LL);
            }
          }
          if ( v4 == 1073741827
            && (v18 = LdrpRelocateImage(*(_QWORD *)(v3 + 48), *(_QWORD *)(a1 + 160), v5, v3 + 72), v7 = v18, v18 < 0) )
          {
            LdrpLogError((unsigned int)v18, 5264LL, 0LL, v3 + 72);
          }
          else
          {
            v19 = *(_QWORD *)(v3 + 48);
            if ( (unsigned int)RtlGetCurrentServiceSessionId(v16, v14) )
              v15 = (__int64)NtCurrentPeb()->SharedData + 554;
            if ( *(_BYTE *)v15 && (NtCurrentPeb()->TracingFlags & 4) != 0 )
            {
              if ( (unsigned int)RtlGetCurrentServiceSessionId(v21, v20) )
                v17 = (__int64)NtCurrentPeb()->SharedData + 555;
              if ( (*(_BYTE *)v17 & 0x20) != 0 )
              {
                LOBYTE(v26) = -1;
                LOBYTE(v25) = -1;
                LdrpLogEtwEvent(5265, v19, v25, v26, 0LL, 0LL);
              }
            }
          }
        }
      }
      else
      {
        v22 = LdrpDebugFlags;
        if ( (LdrpDebugFlags & 3) != 0 )
        {
          LdrpLogDbgPrint(
            (unsigned int)"minkernel\\ntdll\\ldrmap.c",
            867,
            (unsigned int)"LdrpCompleteMapModule",
            0,
            "Could not validate the crypto signature for DLL %wZ\n",
            v3 + 72);
          v22 = LdrpDebugFlags;
        }
        if ( (v22 & 0x10) != 0 )
          __debugbreak();
        return (unsigned int)-1073740760;
      }
    }
    else
    {
      *(_DWORD *)(v3 + 104) &= ~4u;
    }
  }
  return (unsigned int)v7;
}
