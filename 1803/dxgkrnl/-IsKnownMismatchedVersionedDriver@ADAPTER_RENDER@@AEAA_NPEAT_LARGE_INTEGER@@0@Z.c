/*
 * XREFs of ?IsKnownMismatchedVersionedDriver@ADAPTER_RENDER@@AEAA_NPEAT_LARGE_INTEGER@@0@Z @ 0x1C015B5A8
 * Callers:
 *     ?Initialize@ADAPTER_RENDER@@QEAAJXZ @ 0x1C015A35C (-Initialize@ADAPTER_RENDER@@QEAAJXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall ADAPTER_RENDER::IsKnownMismatchedVersionedDriver(
        ADAPTER_RENDER *this,
        union _LARGE_INTEGER *a2,
        union _LARGE_INTEGER *a3)
{
  int v4; // eax
  LONGLONG QuadPart; // rax
  __int64 v7; // rcx

  if ( (a2->HighPart & 0xFFFF0000) < 0x150000 && (a3->HighPart & 0xFFFF0000) < 0x150000 )
    return 1;
  v4 = *(_DWORD *)(*((_QWORD *)this + 2) + 276LL);
  if ( v4 != 32902 )
  {
    if ( v4 == 4098 )
    {
      QuadPart = a3->QuadPart;
      v7 = 0x15001300800000LL;
    }
    else
    {
      if ( v4 != 1297040209 )
        return 0;
      QuadPart = a2->QuadPart;
      if ( a2->QuadPart == 0x160012042C0000LL && a3->QuadPart == 0x160012042B003CLL )
        return 1;
      v7 = 0x848003800000000LL;
    }
    return (QuadPart & 0xFFFFFFFFFFFF0000uLL) == v7;
  }
  if ( a2->QuadPart == 0x16001400101215LL )
    return a3->QuadPart == 0x15001400101215LL;
  return 0;
}
