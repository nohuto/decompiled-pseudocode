/*
 * XREFs of ??0DXGDEVICESYNCOBJECT@@QEAA@PEAVDXGDEVICE@@_N1@Z @ 0x1C00886F0
 * Callers:
 *     ?Open@DXGSYNCOBJECT@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEAPEAXPEA_KIPEAPEAVDXGADAPTERSYNCOBJECT@@_NU_D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS@@@Z @ 0x1C00D8CA0 (-Open@DXGSYNCOBJECT@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEA.c)
 * Callees:
 *     <none>
 */

DXGDEVICESYNCOBJECT *__fastcall DXGDEVICESYNCOBJECT::DXGDEVICESYNCOBJECT(
        DXGDEVICESYNCOBJECT *this,
        struct DXGDEVICE *a2,
        char a3,
        char a4)
{
  char v5; // cl
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rax
  _QWORD *v12; // rax
  __int64 v13; // rcx

  *((_QWORD *)this + 2) = a2;
  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_DWORD *)this + 10) = 0;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  *((_DWORD *)this + 20) = 0;
  v5 = *((_BYTE *)this + 84);
  *((_DWORD *)this + 16) = 0;
  *((_BYTE *)this + 84) = (4 * a4) | (2 * a3) & 0xFB | v5 & 0xF8;
  if ( a3 )
  {
    if ( !*((_DWORD *)a2 + 18) && !ExIsResourceAcquiredExclusiveLite(*((PERESOURCE *)a2 + 13)) )
    {
      v11 = WdLogNewEntry5_WdAssertion(v8, v7, v9, v10);
      *(_QWORD *)(v11 + 24) = 7322LL;
      WdLogEvent5_WdAssertion(v11);
    }
    v12 = (_QWORD *)((char *)a2 + 392);
    v13 = *((_QWORD *)a2 + 49);
    if ( *(struct DXGDEVICE **)(v13 + 8) != (struct DXGDEVICE *)((char *)a2 + 392) )
      __fastfail(3u);
    *(_QWORD *)this = v13;
    *((_QWORD *)this + 1) = v12;
    *(_QWORD *)(v13 + 8) = this;
    *v12 = this;
  }
  return this;
}
