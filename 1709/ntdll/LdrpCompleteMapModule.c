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
  int v7; // edi
  int v8; // eax
  __int64 v9; // rcx
  __int64 v11; // rcx
  __int64 v12; // r13
  __int64 v13; // rsi
  __int64 v14; // rcx
  __int64 v15; // r14
  int v16; // eax
  __int64 v17; // rbx
  char v18; // al
  int v19; // r8d
  int v20; // r9d
  char *v21; // rcx
  int v22; // r8d
  int v23; // r9d
  __int64 v24; // [rsp+88h] [rbp+20h] BYREF

  v3 = *(_QWORD *)(a1 + 56);
  v7 = 0;
  v8 = RtlpImageDirectoryEntryToDataEx(*(_QWORD *)(v3 + 48), (__int64)&v24);
  v9 = v24;
  if ( v8 < 0 )
    v9 = 0LL;
  v24 = v9;
  if ( !v9 )
    goto LABEL_4;
  if ( (*(_DWORD *)(a1 + 32) & 0x800000) != 0 )
    return (unsigned int)-1073741701;
  *(_DWORD *)(v3 + 104) |= 0x400000u;
  if ( (*(_BYTE *)(v9 + 16) & 1) == 0
    || (v11 = *(_QWORD *)(v3 + 48), *(_DWORD *)(v3 + 104) |= 0x1000000u, v7 = LdrpCorValidateImage(v11), v7 >= 0)
    && ((*(_DWORD *)(a1 + 32) & 0x200000) == 0 || (v7 = LdrpCorFixupImage(*(_QWORD *)(v3 + 48)), v7 >= 0)) )
  {
LABEL_4:
    if ( (*(_WORD *)(a2 + 22) & 0x2000) != 0 )
    {
      if ( *(char *)(*(_QWORD *)(v3 + 176) + 32LL) >= 0 || *(char *)(a2 + 94) < 0 )
      {
        if ( (*(_DWORD *)(v3 + 104) & 0x1000000) == 0 && (a3 == 1073741827 || a3 == 1073741878) )
        {
          v12 = *(_QWORD *)(v3 + 48);
          v13 = 2147353476LL;
          if ( RtlGetCurrentServiceSessionId() )
            v14 = (__int64)NtCurrentPeb()->SharedData + 554;
          else
            v14 = 2147353476LL;
          v15 = 2147353477LL;
          if ( *(_BYTE *)v14 && (NtCurrentPeb()->TracingFlags & 4) != 0 )
          {
            v21 = RtlGetCurrentServiceSessionId() ? (char *)NtCurrentPeb()->SharedData + 555 : (char *)2147353477;
            if ( (*v21 & 0x20) != 0 )
            {
              LOBYTE(v20) = -1;
              LOBYTE(v19) = -1;
              LdrpLogEtwEvent(5264, v12, v19, v20, 0LL, 0LL);
            }
          }
          if ( a3 == 1073741827 && (v16 = LdrpRelocateImage(*(PVOID *)(v3 + 48)), v7 = v16, v16 < 0) )
          {
            LdrpLogError((unsigned int)v16, 5264LL, 0LL, v3 + 72);
          }
          else
          {
            v17 = *(_QWORD *)(v3 + 48);
            if ( RtlGetCurrentServiceSessionId() )
              v13 = (__int64)NtCurrentPeb()->SharedData + 554;
            if ( *(_BYTE *)v13 && (NtCurrentPeb()->TracingFlags & 4) != 0 )
            {
              if ( RtlGetCurrentServiceSessionId() )
                v15 = (__int64)NtCurrentPeb()->SharedData + 555;
              if ( (*(_BYTE *)v15 & 0x20) != 0 )
              {
                LOBYTE(v23) = -1;
                LOBYTE(v22) = -1;
                LdrpLogEtwEvent(5265, v17, v22, v23, 0LL, 0LL);
              }
            }
          }
        }
      }
      else
      {
        v18 = LdrpDebugFlags;
        if ( (LdrpDebugFlags & 3) != 0 )
        {
          LdrpLogDbgPrint(
            (unsigned int)"minkernel\\ntdll\\ldrmap.c",
            867,
            (unsigned int)"LdrpCompleteMapModule",
            0,
            "Could not validate the crypto signature for DLL %wZ\n",
            v3 + 72);
          v18 = LdrpDebugFlags;
        }
        if ( (v18 & 0x10) != 0 )
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
