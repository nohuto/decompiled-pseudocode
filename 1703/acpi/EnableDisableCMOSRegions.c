/*
 * XREFs of EnableDisableCMOSRegions @ 0x1C0024B70
 * Callers:
 *     ACPITableLoad @ 0x1C001D690 (ACPITableLoad.c)
 *     EnableDisableCMOSRegions @ 0x1C0024B70 (EnableDisableCMOSRegions.c)
 * Callees:
 *     AMLIIsNamedChildPresent @ 0x1C000A900 (AMLIIsNamedChildPresent.c)
 *     AMLIGetNamedChild @ 0x1C000E580 (AMLIGetNamedChild.c)
 *     AMLIDereferenceHandleEx @ 0x1C00142C0 (AMLIDereferenceHandleEx.c)
 *     AMLIAsyncEvalObject @ 0x1C0022070 (AMLIAsyncEvalObject.c)
 *     EnableDisableCMOSRegions @ 0x1C0024B70 (EnableDisableCMOSRegions.c)
 *     memset @ 0x1C002CB80 (memset.c)
 *     FreeObjectHandle @ 0x1C005E124 (FreeObjectHandle.c)
 */

__int64 __fastcall EnableDisableCMOSRegions(__int64 *a1, unsigned __int8 a2)
{
  __int64 *v2; // rbx
  unsigned __int8 v3; // si
  unsigned int v4; // ebp
  KIRQL v5; // dl
  _QWORD *v6; // rdi
  volatile signed __int32 *v7; // rdi
  int v8; // eax
  KIRQL v9; // dl
  __int64 v10; // rax
  __int64 v11; // rbx
  volatile signed __int32 *v12; // rbx
  bool v13; // zf
  int v15; // eax
  __int64 v16; // rax
  __int64 *v17; // rbx
  int v18; // esi
  _QWORD v19[13]; // [rsp+30h] [rbp-68h] BYREF

  v2 = a1;
  v3 = a2;
  v4 = 0;
  v5 = ExAcquireSpinLockShared(&ACPINamespaceLock);
  v6 = (_QWORD *)(*v2 + 24);
  if ( (_QWORD *)*v6 == v6 )
  {
    v7 = 0LL;
  }
  else
  {
    v7 = (volatile signed __int32 *)(*v6 + 120LL);
    dword_1C00776F8 = 0;
    pszDest = 0;
    if ( (gdwfAMLI & 4) != 0 )
      _InterlockedIncrement(v7 + 2);
  }
  ExReleaseSpinLockShared(&ACPINamespaceLock, v5);
  if ( v7 )
  {
    do
    {
      v8 = *(unsigned __int16 *)(*(_QWORD *)v7 + 66LL);
      if ( v8 == 6 )
      {
        v15 = EnableDisableCMOSRegions(v7, v3);
        if ( v15 < 0 )
          v4 = v15;
      }
      else if ( v8 == 10 )
      {
        v16 = *(_QWORD *)(*(_QWORD *)v7 + 96LL);
        if ( v16 )
        {
          if ( *(_BYTE *)(v16 + 12) == 5 && AMLIIsNamedChildPresent(v2, 1145653343) )
          {
            v17 = AMLIGetNamedChild(v2, 1195725407);
            if ( v17 )
            {
              memset(v19, 0, 0x50uLL);
              v19[2] = 5LL;
              WORD1(v19[0]) = 1;
              WORD1(v19[5]) = 1;
              v19[7] = v3;
              v18 = AMLIAsyncEvalObject(v17, 0LL, 2u, v19, 0LL, 0LL);
              AMLIDereferenceHandleEx((volatile signed __int32 *)v17, 0LL);
              if ( v18 < 0 )
                v4 = v18;
              v3 = a2;
            }
          }
        }
      }
      v9 = ExAcquireSpinLockShared(&ACPINamespaceLock);
      v10 = *(_QWORD *)(*(_QWORD *)v7 + 16LL);
      if ( !v10 || (v11 = **(_QWORD **)v7, v11 == v10 + 24) )
      {
        v12 = 0LL;
      }
      else
      {
        v12 = (volatile signed __int32 *)(v11 + 120);
        dword_1C00776F8 = 0;
        pszDest = 0;
        if ( (gdwfAMLI & 4) != 0 )
          _InterlockedIncrement(v12 + 2);
      }
      ExReleaseSpinLockShared(&ACPINamespaceLock, v9);
      dword_1C00776F8 = 0;
      pszDest = 0;
      if ( (gdwfAMLI & 4) != 0 && !_InterlockedDecrement(v7 + 2) )
        FreeObjectHandle(v7);
      v7 = v12;
      v13 = v12 == 0LL;
      v2 = a1;
    }
    while ( !v13 );
  }
  return v4;
}
