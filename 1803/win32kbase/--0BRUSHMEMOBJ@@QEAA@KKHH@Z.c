/*
 * XREFs of ??0BRUSHMEMOBJ@@QEAA@KKHH@Z @ 0x1C0043810
 * Callers:
 *     hCreateSolidBrushInternal @ 0x1C00436E0 (hCreateSolidBrushInternal.c)
 *     bInitBRUSHOBJ @ 0x1C01F35BC (bInitBRUSHOBJ.c)
 *     bInitBrush @ 0x1C01F39FC (bInitBrush.c)
 * Callees:
 *     ?HmgInsertObjectInternal@@YAPEAUHOBJ__@@PEAXKE@Z @ 0x1C0024450 (-HmgInsertObjectInternal@@YAPEAUHOBJ__@@PEAXKE@Z.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C002AD50 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?bLockHobj@HANDLELOCK@@QEAAHPEAUHOBJ__@@E@Z @ 0x1C002B100 (-bLockHobj@HANDLELOCK@@QEAAHPEAUHOBJ__@@E@Z.c)
 *     ?FreeBrushMemory@@YAXPEAVBRUSH@@@Z @ 0x1C003D910 (-FreeBrushMemory@@YAXPEAVBRUSH@@@Z.c)
 *     HmgRemoveObject @ 0x1C003F690 (HmgRemoveObject.c)
 *     ?pbrAllocBrush@BRUSHMEMOBJ@@AEAAPEAVBRUSH@@H@Z @ 0x1C0043748 (-pbrAllocBrush@BRUSHMEMOBJ@@AEAAPEAVBRUSH@@H@Z.c)
 *     HmgAllocateObjectAttr @ 0x1C004551C (HmgAllocateObjectAttr.c)
 *     HmgFreeObjectAttr @ 0x1C00670CC (HmgFreeObjectAttr.c)
 */

BRUSHMEMOBJ *__fastcall BRUSHMEMOBJ::BRUSHMEMOBJ(BRUSHMEMOBJ *this, int a2, unsigned int a3, int a4, int a5)
{
  struct BRUSH *v8; // rax
  ULONG_PTR v9; // rsi
  unsigned int v10; // edi
  unsigned int v11; // edi
  char v12; // r13
  __int64 v13; // rdx
  __int64 v14; // rcx
  ULONG_PTR v15; // rdi
  _QWORD *ObjectAttr; // r15
  unsigned int v18; // edi
  unsigned int v19; // edi
  unsigned int v20; // edi
  unsigned int v21; // edi
  __int64 v22; // [rsp+58h] [rbp-40h] BYREF
  int v23; // [rsp+60h] [rbp-38h]

  *((_DWORD *)this + 2) = 0;
  if ( a3 > 0xC )
  {
    *(_QWORD *)this = 0LL;
  }
  else
  {
    v8 = BRUSHMEMOBJ::pbrAllocBrush(this, a4);
    v9 = (ULONG_PTR)v8;
    *(_QWORD *)this = v8;
    if ( v8 )
    {
      *((_DWORD *)v8 + 19) = a2;
      *((_DWORD *)v8 + 20) = a3;
      *((_QWORD *)v8 + 3) = 0LL;
      **((_DWORD **)v8 + 6) = 0;
      if ( a3 < 6 )
      {
        *((_DWORD *)v8 + 10) = 32802;
      }
      else
      {
        v10 = a3 - 6;
        if ( v10 )
        {
          v11 = v10 - 1;
          if ( v11 )
          {
            v18 = v11 - 1;
            if ( v18 )
            {
              v19 = v18 - 1;
              if ( v19 )
              {
                v20 = v19 - 1;
                if ( v20 )
                {
                  v21 = v20 - 1;
                  if ( v21 )
                  {
                    if ( v21 == 1 )
                      *((_DWORD *)v8 + 10) = 256;
                  }
                  else
                  {
                    *((_DWORD *)v8 + 10) = 22;
                  }
                }
                else
                {
                  *((_DWORD *)v8 + 10) = 18;
                }
              }
              else
              {
                *((_DWORD *)v8 + 10) = 21;
              }
            }
            else
            {
              *((_DWORD *)v8 + 10) = 17;
            }
          }
          else
          {
            *((_DWORD *)v8 + 10) = 20;
          }
        }
        else
        {
          *((_DWORD *)v8 + 10) = 16;
        }
      }
      v12 = 0;
      v15 = 0LL;
      if ( HmgInsertObjectInternal(v8, 3u, 16) )
      {
        v15 = v9;
        if ( a5 )
        {
          ObjectAttr = (_QWORD *)HmgAllocateObjectAttr(v14, v13);
          if ( ObjectAttr )
          {
            v22 = 0LL;
            v23 = 0;
            HANDLELOCK::bLockHobj((HANDLELOCK *)&v22, *(struct HOBJ__ **)v9, 16);
            if ( v23 )
            {
              *ObjectAttr = *(_QWORD *)(v9 + 72);
              *(_QWORD *)(v22 + 16) = ObjectAttr;
              *(_QWORD *)(v9 + 48) = ObjectAttr;
              HANDLELOCK::vUnlock((HANDLELOCK *)&v22);
              if ( v23 )
                HANDLELOCK::vUnlock((HANDLELOCK *)&v22);
            }
          }
        }
      }
      else
      {
        v12 = 1;
        *(_QWORD *)this = 0LL;
      }
      if ( v15 )
        _InterlockedDecrement((volatile signed __int32 *)(v15 + 12));
      if ( v12 )
        FreeBrushMemory(v9);
    }
  }
  return this;
}
