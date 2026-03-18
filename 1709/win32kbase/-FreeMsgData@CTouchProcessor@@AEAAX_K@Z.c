/*
 * XREFs of ?FreeMsgData@CTouchProcessor@@AEAAX_K@Z @ 0x1C011D7C4
 * Callers:
 *     ?UnreferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z @ 0x1C0127CB4 (-UnreferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z.c)
 * Callees:
 *     Win32FreePool @ 0x1C0041890 (Win32FreePool.c)
 *     ?FreeNode@CTouchProcessor@@AEAAXPEAUCInputPointerNode@@@Z @ 0x1C011D874 (-FreeNode@CTouchProcessor@@AEAAXPEAUCInputPointerNode@@@Z.c)
 *     ?ReleasePointerCaptureInt@CTouchProcessor@@AEAAXPEAUCPointerCaptureInfo@@@Z @ 0x1C01252E4 (-ReleasePointerCaptureInt@CTouchProcessor@@AEAAXPEAUCPointerCaptureInfo@@@Z.c)
 */

void __fastcall CTouchProcessor::FreeMsgData(CTouchProcessor *this, _QWORD *a2)
{
  _QWORD *v2; // rdi
  __int64 v3; // rbx
  _QWORD *v4; // rax
  CTouchProcessor *v5; // rcx
  CTouchProcessor *v6; // rcx
  __int64 v8; // rax
  _QWORD *v9; // rcx

  v2 = (_QWORD *)*a2;
  v3 = a2[5];
  if ( *(_QWORD **)(*a2 + 8LL) != a2 || (v4 = (_QWORD *)a2[1], (_QWORD *)*v4 != a2) )
    __fastfail(3u);
  *v4 = v2;
  v2[1] = v4;
  Win32FreePool((__int64)a2);
  if ( v3 )
  {
    if ( *(_DWORD *)(v3 + 16) == 1 )
    {
      CTouchProcessor::ReleasePointerCaptureInt(v5, (struct CPointerCaptureInfo *)(v3 + 32));
      CTouchProcessor::ReleasePointerCaptureInt(v6, (struct CPointerCaptureInfo *)(v3 + 248));
    }
    if ( (*(_DWORD *)(v3 + 16))-- == 1 )
    {
      v8 = *(_QWORD *)v3;
      if ( *(_QWORD *)(*(_QWORD *)v3 + 8LL) != v3 || (v9 = *(_QWORD **)(v3 + 8), *v9 != v3) )
        __fastfail(3u);
      *v9 = v8;
      *(_QWORD *)(v8 + 8) = v9;
      Win32FreePool(v3);
    }
  }
  if ( (_QWORD *)*v2 == v2 && *((_DWORD *)v2 - 67) == 3 )
    CTouchProcessor::FreeNode(v5, (struct CInputPointerNode *)(v2 - 38));
}
