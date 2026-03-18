/*
 * XREFs of SdbpCheckMatchingDevice @ 0x14072B610
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     SdbFindFirstTag @ 0x1404AFF40 (SdbFindFirstTag.c)
 *     SdbGetStringTagPtr @ 0x1405BC274 (SdbGetStringTagPtr.c)
 *     AslLogCallPrintf @ 0x14072E8A4 (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbpCheckMatchingDevice(_DWORD *a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5, __int64 a6)
{
  __int64 (__fastcall *v6)(__int64); // rbp
  unsigned int v7; // ebx
  const char *v10; // r9
  int v11; // r8d
  unsigned int FirstTag; // eax
  __int64 StringTagPtr; // rax

  v6 = *(__int64 (__fastcall **)(__int64))(a2 + 968);
  v7 = 0;
  *a1 = 0;
  if ( !v6 )
  {
    v10 = "No device query callback specified";
    v11 = 1823;
LABEL_3:
    AslLogCallPrintf(1, (unsigned int)"SdbpCheckMatchingDevice", v11, (_DWORD)v10);
    return v7;
  }
  FirstTag = SdbFindFirstTag(a3, a5, 24577);
  if ( !FirstTag )
  {
    v10 = "Failed to read HWID attribute";
    v11 = 1829;
    goto LABEL_3;
  }
  StringTagPtr = SdbGetStringTagPtr(a3, FirstTag);
  if ( !StringTagPtr )
  {
    v10 = "Failed to get HWID";
    v11 = 1835;
    goto LABEL_3;
  }
  v7 = 1;
  *a1 = v6(StringTagPtr);
  if ( a6 )
    *(_DWORD *)(a6 + 80) = 1;
  return v7;
}
