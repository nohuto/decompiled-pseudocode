/*
 * XREFs of ?UpdatePropertyValue@CPropertyBagMarshaler@DirectComposition@@AEAAJPEBUPropertyUpdate@@_K@Z @ 0x1C001EC40
 * Callers:
 *     ?SetBufferProperty@CPropertyBagMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C001F160 (-SetBufferProperty@CPropertyBagMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX.c)
 * Callees:
 *     <none>
 */

int __fastcall DirectComposition::CPropertyBagMarshaler::UpdatePropertyValue(
        DirectComposition::CPropertyBagMarshaler *this,
        const struct PropertyUpdate *a2,
        __int64 a3)
{
  unsigned __int64 v3; // r9
  unsigned __int64 v5; // rax
  __int64 v7; // r8
  int v8; // ecx
  int v9; // ecx
  int v10; // ecx
  int v11; // ecx
  int v12; // ecx
  int v13; // ecx
  int v14; // ecx
  int v15; // ecx
  int v16; // ecx

  v3 = *((unsigned int *)a2 + 2);
  v5 = v3 + a3 - 16;
  if ( v5 >= v3 && *((_QWORD *)this + 7) >= v5 )
  {
    v7 = *((_QWORD *)this + 6);
    v8 = *((_DWORD *)a2 + 3);
    if ( *(_DWORD *)(v3 + v7) == v8 )
    {
      v9 = v8 - 17;
      if ( v9 )
      {
        v10 = v9 - 1;
        if ( v10 )
        {
          v11 = v10 - 17;
          if ( v11 )
          {
            v12 = v11 - 17;
            if ( v12 )
            {
              v13 = v12 - 17;
              if ( v13 && (v14 = v13 - 1) != 0 && (v15 = v14 - 1) != 0 )
              {
                v16 = v15 - 33;
                if ( v16 )
                {
                  if ( v16 == 161 && a3 == 80 )
                  {
                    *(_OWORD *)(v3 + v7 + 12) = *((_OWORD *)a2 + 1);
                    *(_OWORD *)(v3 + v7 + 28) = *((_OWORD *)a2 + 2);
                    *(_OWORD *)(v3 + v7 + 44) = *((_OWORD *)a2 + 3);
                    *(_OWORD *)(v3 + v7 + 60) = *((_OWORD *)a2 + 4);
                    return DirectComposition::CPropertyBagMarshaler::AddPropertyUpdate(this, a2);
                  }
                }
                else if ( a3 == 40 )
                {
                  *(_OWORD *)(v3 + v7 + 12) = *((_OWORD *)a2 + 1);
                  *(_QWORD *)(v3 + v7 + 28) = *((_QWORD *)a2 + 4);
                  return DirectComposition::CPropertyBagMarshaler::AddPropertyUpdate(this, a2);
                }
              }
              else if ( a3 == 32 )
              {
                *(_OWORD *)(v3 + v7 + 12) = *((_OWORD *)a2 + 1);
                return DirectComposition::CPropertyBagMarshaler::AddPropertyUpdate(this, a2);
              }
            }
            else if ( a3 == 28 )
            {
              *(_QWORD *)(v3 + v7 + 12) = *((_QWORD *)a2 + 2);
              *(_DWORD *)(v3 + v7 + 20) = *((_DWORD *)a2 + 6);
              return DirectComposition::CPropertyBagMarshaler::AddPropertyUpdate(this, a2);
            }
          }
          else if ( a3 == 24 )
          {
            *(_QWORD *)(v3 + v7 + 12) = *((_QWORD *)a2 + 2);
            return DirectComposition::CPropertyBagMarshaler::AddPropertyUpdate(this, a2);
          }
        }
        else if ( a3 == 20 )
        {
          *(_DWORD *)(v3 + v7 + 12) = *((_DWORD *)a2 + 4);
          return DirectComposition::CPropertyBagMarshaler::AddPropertyUpdate(this, a2);
        }
      }
      else if ( a3 == 20 )
      {
        *(_BYTE *)(v3 + v7 + 12) = *((_BYTE *)a2 + 16);
        return DirectComposition::CPropertyBagMarshaler::AddPropertyUpdate(this, a2);
      }
    }
  }
  return -1073741811;
}
