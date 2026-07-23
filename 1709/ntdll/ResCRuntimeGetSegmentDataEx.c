/*
 * XREFs of ResCRuntimeGetSegmentDataEx @ 0x18008E028
 * Callers:
 *     ResCRuntimeGetResourceDataEx @ 0x18008DD70 (ResCRuntimeGetResourceDataEx.c)
 * Callees:
 *     RtlSetLastWin32Error @ 0x18001ACF0 (RtlSetLastWin32Error.c)
 *     DbgPrintEx @ 0x18006C580 (DbgPrintEx.c)
 *     ResCKeSegmentOpenMapping @ 0x18008E1DC (ResCKeSegmentOpenMapping.c)
 *     __security_check_cookie @ 0x180090C90 (__security_check_cookie.c)
 *     ResCDirectoryGetSegmentName @ 0x18010C710 (ResCDirectoryGetSegmentName.c)
 *     ResCSegmentCreateMapping @ 0x18010C908 (ResCSegmentCreateMapping.c)
 *     ResCReleaseInitMutex @ 0x18010ED1C (ResCReleaseInitMutex.c)
 *     ResCRequestInitMutex @ 0x18010ED70 (ResCRequestInitMutex.c)
 *     _ResCOpenMapping @ 0x18010F2F8 (_ResCOpenMapping.c)
 *     ResCGetSubIndexedName @ 0x180111190 (ResCGetSubIndexedName.c)
 */

__int64 __fastcall ResCRuntimeGetSegmentDataEx(__int64 a1, unsigned int a2, unsigned int a3, int a4, char a5)
{
  int v5; // r10d
  unsigned int v6; // r9d
  __int64 v7; // r15
  __int64 v9; // rbx
  __int64 v10; // r8
  __int64 v11; // rdx
  __int64 v12; // rcx
  int v14; // r13d
  __int64 SegmentName; // rax
  __int64 v16; // r12
  __int64 v17; // rcx
  __int64 inited; // rsi
  wchar_t Src[264]; // [rsp+50h] [rbp-248h] BYREF

  v5 = a4;
  v6 = a3;
  v7 = a2;
  v9 = 0LL;
  if ( !a1 || !v5 )
  {
    if ( !NtCurrentTeb()->LastErrorValue )
      RtlSetLastWin32Error(87);
    return 0LL;
  }
  v10 = *(_QWORD *)(a1 + 16);
  if ( a2 >= *(_DWORD *)(*(_QWORD *)(v10 + 24) + 68LL)
    || (a5 & 2) == 0 && *(_DWORD *)(32LL * a2 + *(_QWORD *)(v10 + 32) + 24) )
  {
    return 0LL;
  }
  if ( !*(_QWORD *)(*(_QWORD *)(a1 + 24) + 8LL * a2) && (a5 & 0x10) == 0 )
  {
    v14 = (*(_DWORD *)(a1 + 4) >> 2) & 1;
    if ( *(char *)a1 >= 0 )
    {
      SegmentName = ResCDirectoryGetSegmentName(v10, a2);
      v16 = SegmentName;
      if ( !SegmentName )
        return 0LL;
      *(_QWORD *)(*(_QWORD *)(a1 + 24) + 8 * v7) = ResCOpenMapping(SegmentName);
      if ( !*(_QWORD *)(*(_QWORD *)(a1 + 24) + 8 * v7) )
      {
        v17 = *(_QWORD *)(a1 + 32);
        if ( v17 )
        {
          if ( !(unsigned int)ResCGetSubIndexedName(
                                v17,
                                *(_QWORD *)(*(_QWORD *)(a1 + 16) + 24LL),
                                *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 24LL) + 12LL),
                                v7,
                                Src) )
            return 0LL;
          inited = ResCRequestInitMutex(v16);
          if ( !inited )
            return 0LL;
          *(_QWORD *)(*(_QWORD *)(a1 + 24) + 8 * v7) = ResCOpenMapping(v16);
          if ( !*(_QWORD *)(*(_QWORD *)(a1 + 24) + 8 * v7) )
            *(_QWORD *)(*(_QWORD *)(a1 + 24) + 8 * v7) = ResCSegmentCreateMapping(Src, v14);
          ResCReleaseInitMutex(inited);
        }
      }
    }
    else
    {
      *(_QWORD *)(*(_QWORD *)(a1 + 24) + 8LL * a2) = ResCKeSegmentOpenMapping(a2);
    }
    v5 = a4;
    v6 = a3;
  }
  if ( !*(_QWORD *)(*(_QWORD *)(a1 + 24) + 8 * v7) )
    return 0LL;
  _mm_lfence();
  v11 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 8 * v7);
  v12 = *(_QWORD *)(v11 + 32);
  if ( *(_QWORD *)v12 != 0x47455343534552LL )
  {
    DbgPrintEx(0xFFFFFFFF, 0, "*** RESCACHE: Segment %u magic field is corrupt!!! ***\n", v7);
    DbgPrintEx(0xFFFFFFFF, 0, "*** --------> Follow-up: avgarcia;erik;muidev ***\n");
    return 0LL;
  }
  if ( v6 + v5 >= *(_DWORD *)(v12 + 28) )
    return 0LL;
  if ( v12 && v6 < *(_DWORD *)(v12 + 28) )
    return *(_QWORD *)(v11 + 40) + v6;
  RtlSetLastWin32Error(87);
  return v9;
}
