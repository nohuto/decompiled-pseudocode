/*
 * XREFs of memcpy_s_0 @ 0x18017C6BC
 * Callers:
 *     ?GenerateIntermediateSurfaceBrush@CBrushDrawListGenerator@@QEAAJPEAPEAVCSurfaceDrawListBrush@@PEBVCDrawListBrush@@PEAVCRenderingEffectFactory@@@Z @ 0x18017BC04 (-GenerateIntermediateSurfaceBrush@CBrushDrawListGenerator@@QEAAJPEAPEAVCSurfaceDrawListBrush@@PE.c)
 * Callees:
 *     memset_0 @ 0x1800DB710 (memset_0.c)
 *     _invalid_parameter_noinfo @ 0x1800DB752 (_invalid_parameter_noinfo.c)
 *     memcpy_0 @ 0x1800DD3FB (memcpy_0.c)
 */

errno_t __cdecl memcpy_s_0(
        void *const Destination,
        const rsize_t DestinationSize,
        const void *const Source,
        const rsize_t SourceSize)
{
  errno_t *v7; // rax
  errno_t v8; // ebx

  if ( !SourceSize )
    return 0;
  if ( !Destination )
    goto LABEL_4;
  if ( Source && SourceSize <= 0x28 )
  {
    memcpy_0(Destination, Source, SourceSize);
    return 0;
  }
  memset_0(Destination, 0, 0x28uLL);
  if ( !Source )
  {
LABEL_4:
    v7 = (errno_t *)_o__errno(Destination, DestinationSize, Source, SourceSize);
    v8 = 22;
LABEL_5:
    *v7 = v8;
    invalid_parameter_noinfo();
    return v8;
  }
  if ( SourceSize > 0x28 )
  {
    v7 = (errno_t *)_o__errno(Destination, DestinationSize, Source, SourceSize);
    v8 = 34;
    goto LABEL_5;
  }
  return 22;
}
