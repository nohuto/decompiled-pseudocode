/*
 * XREFs of ?v_MarshalAdditionalData@CImmersiveWindowFactoryBase@@EEAAJPEAUIStream@@AEBU_GUID@@PEAXK2K@Z @ 0x1801DFE40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __fastcall CImmersiveWindowFactoryBase::v_MarshalAdditionalData(
        CImmersiveWindowFactoryBase *this,
        struct IStream *a2,
        const struct _GUID *a3,
        void *a4)
{
  int result; // eax
  char pv; // [rsp+30h] [rbp+8h] BYREF

  result = IStream_Write(a2, (char *)this + 132, 0x10u);
  if ( result >= 0 )
  {
    result = IStream_Write(a2, (char *)this + 148, 4u);
    if ( result >= 0 )
    {
      result = IStream_Write(a2, (char *)this + 121, 1u);
      if ( result >= 0 )
      {
        pv = 0;
        result = IStream_Write(a2, &pv, 1u);
        if ( result >= 0 )
        {
          result = IStream_Write(a2, (char *)this + 160, 1u);
          if ( result >= 0 )
          {
            if ( *((_BYTE *)this + 160) )
              result = IStream_Write(a2, (char *)this + 164, 4u);
            if ( result >= 0 )
            {
              result = IStream_Write(a2, (char *)this + 168, 1u);
              if ( result >= 0 )
              {
                if ( *((_BYTE *)this + 168) )
                  return IStream_Write(a2, (char *)this + 172, 4u);
              }
            }
          }
        }
      }
    }
  }
  return result;
}
